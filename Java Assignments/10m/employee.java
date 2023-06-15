public class employee {
    public String name;
    public float salary;
    public employee(){
        name="mayur";
        salary=1000;
    }
    public void display(){
        System.out.println("Name of employee : "+name);
        System.out.println("Salary of employee : "+salary);
    }
    public static void main(String args[]){
        prog_lang_GUI b=new prog_lang_GUI();
        developer d=new developer();
        programmer p=new programmer();
        p.display();
    }
}
class developer extends prog_lang_GUI{
    public String project_name;
    public developer(){
        project_name="Data_structures";
    }
    public void display(){
        super.display();
        System.out.println("Employee project_name : "+project_name);
    }
}
class programmer extends developer{
    public String proglanguage;
    public programmer(){
        proglanguage="java";
    }
    public void display(){
        super.display();
        System.out.println("Employee programming language : "+proglanguage);
    }
}

