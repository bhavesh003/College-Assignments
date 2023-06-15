//1. WAP to create student struct with student name and marks and sort it based on student marks using sort package

package main

import (
	"fmt"
	"sort"
)

type student struct {
	name  string
	marks float32
}

func main() {
	var n int

	fmt.Print("How many Student details you wants to enter : ")
	fmt.Scan(&n)

	stud := make([]student, n)

	for i := 0; i < n; i++ {
		fmt.Println("Student ", (i + 1))
		fmt.Print("Enter a Name : ")
		fmt.Scan(&stud[i].name)
		fmt.Print("Enter Marks : ")
		fmt.Scan(&stud[i].marks)
		fmt.Print("\n")
	}

	sort.Slice(stud, func(i, j int) bool {
		return stud[i].marks < stud[j].marks
	})

	print("NAME\tMARKS\n")
	for i := 0; i < n; i++ {
		fmt.Println(stud[i].name, "\t", stud[i].marks, "")

	}

}
