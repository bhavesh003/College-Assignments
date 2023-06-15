
package main

import "fmt"

func main() {
	multi := make([][]int, 5)

	for i := 0; i < 5; i++ {
		multi[i] = make([]int, 5)
	}

	for i := 0; i < 5; i++ {
		for j := 0; j < 5; j++ {
			multi[i][j] = i
		}
	}

	fmt.Println(multi)
}
