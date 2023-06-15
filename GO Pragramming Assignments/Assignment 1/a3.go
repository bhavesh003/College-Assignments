//3. WAP in go language to swap the number without temporary variable.

package main

import (
	"fmt"
)

func main() {
	var a, b int
	fmt.Print("Enter the first number: ")
	fmt.Scanln(&a)
	fmt.Print("Enter the second number: ")
	fmt.Scanln(&b)
	
	fmt.Printf("Before swapping: a = %d, b = %d\n", a, b)
	
	a = a + b
	b = a - b
	a = a - b
	
	fmt.Printf("After swapping: a = %d, b = %d\n", a, b)
}

