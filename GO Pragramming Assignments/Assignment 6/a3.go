//3. WAP in Go language to create an user defined package to find out the area of a rectangle.

package main

import (
	"fmt"
	rectangle "go-packages/rectangle"
)

func main() {
	var length, width float32

	fmt.Print("Enter Length : ")
	fmt.Scan(&length)

	fmt.Print("Enter Width : ")
	fmt.Scan(&width)

	fmt.Println("\nArea of Rectangle : ", rectangle.Area(length, width))

}
