import java.io.*;
import java.util.*;

class Employee{
    String name;
    double salary;

    Employee(String name, double salary){
        this.name=name;
        this.salary=salary;
    }

    public static void main(String args[]){
        Programmer p = new Programmer("boss", 150, "java");
        p.display();
    }
}

class Programmer extends Employee {
    String prolang;

    Programmer(String name, double salary, String prolang)
    {
        super(name,salary);
        this.prolang=prolang;
    }

    void display()
    {
        System.out.println("Name: "+super.name);
        System.out.println("Salary: "+super.salary);
        System.out.println("Pro Lang: "+prolang);
    }
    
}
