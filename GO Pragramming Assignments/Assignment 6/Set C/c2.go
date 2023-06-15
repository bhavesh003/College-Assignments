//2. WAP in Go language to print file information.

package main

import (
	"fmt"
	"os"
)

func main() {

	file, _ := os.Stat("1.go")

	fmt.Println("File Name : ", file.Name())
	fmt.Println("File Size : ", file.Size())
	fmt.Println("Is Dir ", file.IsDir())

}
