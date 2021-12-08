package main

import (
	"bufio"
	"log"
	"math"
	"strconv"
)

type Day1 struct {
	inputArray []int
}

func newDay1(scanner *bufio.Scanner) *Day1 {
	var inputArray []int
	for scanner.Scan() {
		line, err := strconv.Atoi(scanner.Text())
		if err != nil {
			log.Fatal(err)
		}
		inputArray = append(inputArray, line)
	}
	return &Day1{inputArray: inputArray}
}

func (day1 Day1) solveTaskOne() int {
	prevVal := math.MinInt
	totalMax := -1
	for _, i := range day1.inputArray {
		if i > prevVal {
			totalMax++
		}
		prevVal = i
	}
	return totalMax
}

func (day1 Day1) solveTaskTwo() int {
	prevWindow := math.MinInt
	totalMax := 0
	for i := range day1.inputArray {
		if i+2 == len(day1.inputArray)-1 {
			break
		}
		currentWindow := day1.inputArray[i] + day1.inputArray[i+1] + day1.inputArray[i+2]
		if currentWindow > prevWindow {
			totalMax++
		}
		prevWindow = currentWindow
	}
	return totalMax
}
