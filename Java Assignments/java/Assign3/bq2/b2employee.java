public class b2employee {
    String name;
    double salary;

    public b2employee() {
    }

    public b2employee(String name, double salary) {
        this.name = name;
        this.salary = salary;
    }

    public void display() {
        System.out.println("Name of employee : " + name);
        System.out.println("Salary of employee : " + salary);
    }

    public static void main(String args[]) {
        b2employee b = new b2employee("Mayur", 1000);
        developer d = new developer("Data-Structure");
        programmer p = new programmer("Java");
        p.display();
    }
}

class developer extends b2employee {
    String project_name;

    public developer() {
    }

    public developer(String project_name) {
        this.project_name = project_name;
    }

    public void display() {
        super.display();
        System.out.println("Employee project_name : " + project_name);
    }
}

class programmer extends developer {
    String proglanguage;

    public programmer() {
    }

    public programmer(String proglanguage) {
        this.proglanguage = proglanguage;
    }

    public void display() {
        super.display();
        System.out.println("Employee programming language : " + proglanguage);
    }
}