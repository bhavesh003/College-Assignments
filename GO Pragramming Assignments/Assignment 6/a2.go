//2. WAP in Go language using user defined package calculator that performs one calculator operation as per the user's choice.

package main

import (
	"fmt"
	text "go-packages/test"
)

func main() {
	var a, b, ch int

	fmt.Print("Enter 1st number : ")
	fmt.Scan(&a)

	fmt.Print("Enter 2nd number : ")
	fmt.Scan(&b)

	for true {
		fmt.Print("\n1. Addition\n2. Subtraction\n3. Multiplication\n4 Division \n5. Exit\nEnter a Choice : ")
		fmt.Scan(&ch)

		switch ch {
		case 1:
			println("\nAddition ", text.Add(a, b))
		case 2:
			println("\nSubtraction ", text.Sub(a, b))
		case 3:
			println("\nMultiplication ", text.Mul(a, b))
		case 4:
			println("\nDivision ", text.Div(a, b))
		case 5:
			println("\nThank You !!!\n")
			return
		}
	}

}
