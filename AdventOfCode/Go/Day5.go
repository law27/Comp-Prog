package main

import (
	"bufio"
	"log"
	"math"
	"strconv"
	"strings"
)

type Day5 struct {
	inputPoints []Point
}

type Point struct {
	x1 int
	x2 int
	y1 int
	y2 int
}

func parseInt(str string) int {
	val, err := strconv.Atoi(str)
	if err != nil {
		log.Fatal(err)
	}
	return val
}

func newDay5(scanner *bufio.Scanner) *Day5 {
	var inputPoints []Point
	for scanner.Scan() {
		line := scanner.Text()
		arr := strings.Split(line, " -> ")
		one := strings.Split(arr[0], ",")
		two := strings.Split(arr[1], ",")
		point := Point{
			x1: parseInt(one[0]),
			y1: parseInt(one[1]),
			x2: parseInt(two[0]),
			y2: parseInt(two[1]),
		}
		inputPoints = append(inputPoints, point)
	}
	return &Day5{
		inputPoints: inputPoints,
	}
}

func findVerticalAndHorizontalVents(vents *[1000][1000]int, points []Point) {
	for _, point := range points {
		if point.x1 == point.x2 {
			for i := int(math.Min(float64(point.y1), float64(point.y2))); i <= int(math.Max(float64(point.y1), float64(point.y2))); i++ {
				vents[i][point.x1]++
			}
		} else if point.y1 == point.y2 {
			for i := int(math.Min(float64(point.x1), float64(point.x2))); i <= int(math.Max(float64(point.x1), float64(point.x2))); i++ {
				vents[point.y1][i]++
			}
		}
	}
}

func findMaxValue(vents *[1000][1000]int) int {
	ans := 0
	for _, value := range vents {
		for _, i := range value {
			if i >= 2 {
				ans++
			}
		}
	}
	return ans
}

func findDiagonal(vents *[1000][1000]int, points []Point) {
	for _, point := range points {
		if point.x1 == point.y1 {

		}
	}
}

func (day Day5) solveTaskOne() int {
	var vents [1000][1000]int
	findVerticalAndHorizontalVents(&vents, day.inputPoints)
	return findMaxValue(&vents)
}

func (day Day5) solveTaskTwo() int {
	var vents [1000][1000]int
	findVerticalAndHorizontalVents(&vents, day.inputPoints)
	findDiagonal(&vents, day.inputPoints)
	return findMaxValue(&vents)
}
