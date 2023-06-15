//1. WAP in Go language to read a XML file into structure and display structure

package main

import (
	"encoding/xml"
	"fmt"
	"io/ioutil"
)

type Subject struct {
	SubjectName string `xml:"subjectName"`
	Teacher     string `xml:"teacher"`
	Book        string `xml:"book"`
}

func main() {

	subject := new(Subject)

	file, _ := ioutil.ReadFile("demo.xml")

	_ = xml.Unmarshal([]byte(file), &subject)

	fmt.Println("Subject Name : ", subject.SubjectName)
	fmt.Println("Teacher Name : ", subject.Teacher)
	fmt.Println("Book : ", subject.Book)

}
