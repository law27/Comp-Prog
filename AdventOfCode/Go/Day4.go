package main

import (
	"bufio"
	"log"
	"strconv"
	"strings"
)

type Day4 struct {
	inputArray  []int
	inputMatrix [][][]int
}

type Pair struct {
	one int
	two int
}

func formMatrix(tempMatrix []string) *[][]int {
	var twoDimensionalMatrix [][]int
	for _, val := range tempMatrix {
		splitArray := strings.Split(val, " ")
		var intArray []int
		for _, value := range splitArray {
			if value != "" {
				if intVal, err := strconv.Atoi(value); err != nil {
					log.Fatal(err)
				} else {
					intArray = append(intArray, intVal)
				}

			}
		}
		twoDimensionalMatrix = append(twoDimensionalMatrix, intArray)
	}
	return &twoDimensionalMatrix
}

func lookUpMap(twoDimensionalArray [][]int) map[int]Pair {
	mp := make(map[int]Pair)
	for i, arr := range twoDimensionalArray {
		for j, val := range arr {
			mp[val] = Pair{one: i, two: j}
		}
	}
	return mp
}

func newDay4(scanner *bufio.Scanner) *Day4 {
	scanner.Scan()
	inputs := scanner.Text()
	temp := strings.Split(inputs, ",")
	var inputArray []int
	for _, val := range temp {
		if num, err := strconv.Atoi(val); err != nil {
			log.Fatal(err)
		} else {
			inputArray = append(inputArray, num)
		}
	}
	var inputMatrix [][][]int
	var tempMatrix []string
	for scanner.Scan() {
		line := scanner.Text()
		if line == "" && len(tempMatrix) != 0 {
			inputMatrix = append(inputMatrix, *formMatrix(tempMatrix))
			tempMatrix = make([]string, 0)
		} else {
			if strings.Trim(line, " ") != "" {
				tempMatrix = append(tempMatrix, line)
			}
		}
	}
	return &Day4{
		inputArray:  inputArray,
		inputMatrix: inputMatrix,
	}
}

func generateLookUpMap(inputMatrix [][][]int) []map[int]Pair {
	var lookUpMapArray []map[int]Pair
	for _, arr := range inputMatrix {
		lookUpMapArray = append(lookUpMapArray, lookUpMap(arr))
	}
	return lookUpMapArray
}

func checkColumn(index int, matrix [][]int) bool {
	for i := 0; i < len(matrix[0]); i++ {
		if matrix[index][i] == 0 {
			return false
		}
	}
	return true
}

func checkRow(index int, matrix [][]int) bool {
	for i := 0; i < len(matrix); i++ {
		if matrix[i][index] == 0 {
			return false
		}
	}
	return true
}

func strikeAndCheck(bingo [][]int, lookUp map[int]Pair, value int) bool {
	if indexPair, ok := lookUp[value]; ok {
		bingo[indexPair.one][indexPair.two] = -1
		return checkColumn(indexPair.one, bingo) || checkRow(indexPair.two, bingo)
	}
	return false
}

func getAllUnMarkedNumbers(matrix [][]int, bingo [][]int) int {
	sum := 0
	for i, arr := range matrix {
		for j, val := range arr {
			if val != -1 {
				sum += bingo[i][j]
			}
		}
	}
	return sum
}

func createMatrix(size int) [][][]int {
	var matrix [][][]int
	for i := 0; i < size; i++ {
		var temp [][]int
		for j := 0; j < 5; j++ {
			arr := make([]int, 5)
			temp = append(temp, arr)
		}
		matrix = append(matrix, temp)
	}
	return matrix
}

func (day Day4) solveTaskOne() int {
	lookUp := generateLookUpMap(day.inputMatrix)
	matrix := createMatrix(len(day.inputMatrix))
	answer := 0
	for _, value := range day.inputArray {
		for index, bingo := range day.inputMatrix {
			result := strikeAndCheck(matrix[index], lookUp[index], value)
			if result {
				answer = getAllUnMarkedNumbers(matrix[index], bingo) * value
				return answer
			}
		}
	}
	return answer
}

func (day Day4) solveTaskTwo() int {
	lookUp := generateLookUpMap(day.inputMatrix)
	matrix := createMatrix(len(day.inputMatrix))
	answer := 0
	deleted := make(map[int]struct{})
	var finalValue int
	for _, value := range day.inputArray {
		for index, bingo := range day.inputMatrix {
			result := strikeAndCheck(matrix[index], lookUp[index], value)
			if _, ok := deleted[index]; !ok && result {
				answer = getAllUnMarkedNumbers(matrix[index], bingo)
				finalValue = value
				deleted[index] = struct{}{}
			}
		}
	}
	return answer * finalValue
}
