package main

import "fmt"

func Add(a, b int) int {
	return a + b
}

func Mult(a, b int) int {
	if a == 0 {
		return 0
	}
	return b + Mult(a-1, b)
}

func main() {
	fmt.Println("Nice")
}
