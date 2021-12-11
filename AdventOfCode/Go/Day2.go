package main

import (
	"bufio"
	"log"
	"strconv"
	"strings"
)

type Day2 struct {
	inputArray []string
}

func newDay2(scanner *bufio.Scanner) *Day2 {
	var inputArray []string
	for scanner.Scan() {
		value := scanner.Text()
		inputArray = append(inputArray, value)
	}
	return &Day2{inputArray: inputArray}
}

func (day Day2) solveTaskOne() int {
	horizontalMovement := 0
	verticalMovement := 0
	for _, val := range day.inputArray {
		values := strings.Split(val, " ")
		direction := values[0]
		distance, err := strconv.Atoi(values[1])
		if err != nil {
			log.Fatal(err)
		}
		if direction == "forward" {
			horizontalMovement += distance
		} else if direction == "up" {
			verticalMovement -= distance
		} else if direction == "down" {
			verticalMovement += distance
		}
	}
	return horizontalMovement * verticalMovement
}

func (day Day2) solveTaskTwo() int {
	horizontalPosition := 0
	depth := 0
	aim := 0
	for _, val := range day.inputArray {
		values := strings.Split(val, " ")
		direction := values[0]
		value, err := strconv.Atoi(values[1])
		if err != nil {
			log.Fatal(err)
		}
		if direction == "forward" {
			horizontalPosition += value
			depth += aim * value
		} else if direction == "up" {
			aim -= value
		} else if direction == "down" {
			aim += value
		}
	}
	return horizontalPosition * depth
}
