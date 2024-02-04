package main

import "fmt"

func main() {
	i, sum := 1, 0
	var n int = 0
	_, _ = fmt.Scanf("%d", &n)
	for i <= n {
		if i%3 == 0 || i%5 == 0 {
			sum += i
		}
		i++
	}
	fmt.Printf("Sum: %d", sum)
}
