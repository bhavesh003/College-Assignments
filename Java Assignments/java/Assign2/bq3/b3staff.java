import java.util.*;

abstract class Staff {
  String name, address;

  abstract void calculate_salary();
}

class FullTimeStaff extends Staff {
  String department;
  double salary = 0;
  double Total_salary = 0;
  double hra,da;


  public void accept() {
    System.out.print("Enter the member_name - address - department - salary : ");
    Scanner sc = new Scanner(System.in);
    name = sc.next();
    address = sc.next();
    department = sc.next();
    salary = sc.nextDouble();
  }

  void calculate_salary() {
    Total_salary = salary + hra + da;
    System.out.println("Total salary of the Employee is : " + Total_salary);
    System.out.println("----------------------");
  }

  public void display() {
    hra=(8*salary)/100;
    da=(5*salary)/100;
    System.out.println("Name: " + name);
    System.out.println("Address: " + address);
    System.out.println("Department: " + department);
    System.out.println("Salary: " + salary);
    System.out.println("HRA: " + hra);
    System.out.println("DA: " + da);
  }
}

class PartTimeStaff extends Staff {
  int hours, rate;
  double Total_salary;

  public void accept() {
    System.out.print("Enter the name - address - No of working hours - rate per hour : ");
    Scanner sc = new Scanner(System.in);
    name = sc.next();
    address = sc.next();
    hours = sc.nextInt();
    rate = sc.nextInt();
  }

  void calculate_salary() {
    Total_salary = hours * rate;
    System.out.println("Total salary of the Employee is : " + Total_salary);
    System.out.println("----------------------");
  }

  public void display() {
    System.out.println("Name: " + name);
    System.out.println("Address: " + address);
    System.out.println("No of Working Hours: " + hours);
    System.out.println("Rate per hour: " + rate);
  }
}

public class b3staff {
  public static void main(String[] args) {
    int i;
    System.out.println("Select Any One: ");
    Scanner sc = new Scanner(System.in);
    System.out.println("1.Full Time Staff");
    System.out.println("2.Part Time Satff");
    int ch = sc.nextInt();
    switch (ch) {
      case 1:
        System.out.print("Enter the number of Full Time Staff: ");
        int n = sc.nextInt();
        FullTimeStaff[] fl = new FullTimeStaff[n];
        for (i = 0; i < n; i++) {
          fl[i] = new FullTimeStaff();
          fl[i].accept();
        }
        for (i = 0; i < n; i++) {
          fl[i].display();
          fl[i].calculate_salary();
        }
        break;
      case 2:
        System.out.print("Enter the number of Part Time Staff: ");
        int m = sc.nextInt();
        PartTimeStaff[] pt = new PartTimeStaff[m];
        for (i = 0; i < m; i++) {
          pt[i] = new PartTimeStaff();
          pt[i].accept();
        }
        for (i = 0; i < m; i++) {
          pt[i].display();
          pt[i].calculate_salary();
        }
        break;

    }
  }
}
