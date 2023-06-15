//3. WAP in Go language to add or append content at the end of a text file.

package main

import (
	"fmt"
	"os"
)

func main() {
	file, _ := os.OpenFile("demo.txt", os.O_APPEND|os.O_WRONLY, 777)

	_, err2 := file.WriteString("Hii\n")

	defer file.Close()
	if err2 != nil {
		fmt.Println("Error")

	} else {
		fmt.Println("Operation successful!")
	}

}
