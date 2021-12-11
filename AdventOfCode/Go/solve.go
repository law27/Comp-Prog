package main

import (
	"bufio"
	"fmt"
	"log"
	"os"
)

type Task interface {
	solveTaskOne() int
	solveTaskTwo() int
}

func solveOne(problem Task) {
	fmt.Println(problem.solveTaskOne())
}

func solveTwo(problem Task) {
	fmt.Println(problem.solveTaskTwo())
}

func readInput(fileName string) *bufio.Scanner {
	path := "./TestCases/" + fileName
	file, ferr := os.Open(path)
	if ferr != nil {
		log.Fatal(ferr)
	}
	return bufio.NewScanner(file)
}

func main() {
	input := readInput("Day2.txt")
	day2 := newDay2(input)
	solveOne(day2)
	solveTwo(day2)
}
