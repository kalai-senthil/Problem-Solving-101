package main

import "fmt"

func main() {
	val, sum := 0, 0
	next, prev := 1, 1
	s := make(map[int]int)

	for val <= 4000000 {
		val = next + prev
		if val%2 == 0 {
			sum += val
		}
		prev = next
		next = val
	}
	fmt.Printf("Sum: %d", sum)
}
