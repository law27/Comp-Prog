package main

import (
	"bufio"
	"log"
	"strconv"
)

type Day3 struct {
	inputArray []string
}

func newDay3(scanner *bufio.Scanner) *Day3 {
	var inputArray []string
	for scanner.Scan() {
		line := scanner.Text()
		inputArray = append(inputArray, line)
	}
	return &Day3{inputArray: inputArray}
}

func getOneArray(input []string) []int {
	oneArray := make([]int, len(input[0]))
	for _, item := range input {
		for index, element := range item {
			if element == '1' {
				oneArray[index]++
			}
		}
	}
	return oneArray
}

func (day Day3) solveTaskOne() int {
	oneArray := getOneArray(day.inputArray)
	length := len(day.inputArray)
	gammaRate := ""
	epsilonRate := ""
	for _, value := range oneArray {
		numberOfZeros := length - value
		if value > numberOfZeros {
			gammaRate += "1"
			epsilonRate += "0"
		} else {
			gammaRate += "0"
			epsilonRate += "1"
		}
	}
	gammaRateInt, err := strconv.ParseInt(gammaRate, 2, 32)
	if err != nil {
		log.Fatal(err)
	}
	epsilonRateInt, err := strconv.ParseInt(epsilonRate, 2, 64)
	if err != nil {
		log.Fatal(err)
	}
	return int(gammaRateInt) * int(epsilonRateInt)
}

func filter(list []string, test func(string) bool) []string {
	var filteredArray []string
	for _, value := range list {
		if test(value) {
			filteredArray = append(filteredArray, value)
		}
	}
	return filteredArray
}

func (day Day3) solveTaskTwo() int {
	oxygen := make([]string, len(day.inputArray))
	carbon := make([]string, len(day.inputArray))
	copy(oxygen, day.inputArray)
	copy(carbon, day.inputArray)
	index := 0
	for len(oxygen) != 1 || len(carbon) != 1 {
		if len(oxygen) > 1 {
			oxygenOneArray := getOneArray(oxygen)
			zeros := (len(oxygen) - oxygenOneArray[index])
			toFilter := '0'
			if zeros <= oxygenOneArray[index] {
				toFilter = '1'
			}
			oxygen = filter(oxygen, func(str string) bool { return str[index] == byte(toFilter) })
		}
		if len(carbon) > 1 {
			corbonOneArray := getOneArray(carbon)
			zeros := (len(carbon) - corbonOneArray[index])
			toFilter := '0'
			if zeros <= corbonOneArray[index] {
				toFilter = '1'
			}
			carbon = filter(carbon, func(str string) bool { return str[index] != byte(toFilter) })
		}
		index++
	}
	gammaRateInt, err := strconv.ParseInt(oxygen[0], 2, 32)
	if err != nil {
		log.Fatal(err)
	}
	epsilonRateInt, err := strconv.ParseInt(carbon[0], 2, 32)
	if err != nil {
		log.Fatal(err)
	}
	return int(gammaRateInt) * int(epsilonRateInt)
}
