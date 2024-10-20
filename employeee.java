
class Employee {
   
    int id;
    String name;
    String department;
    double salary;

  
    public Employee(int id, String name, String department, double salary) {
        this.id = id;
        this.name = name;
        this.department = department;
        this.salary = salary;
    }

 
    public void displayDetails() {
        System.out.println("Employee ID: " + id);
        System.out.println("Employee Name: " + name);
        System.out.println("Employee Department: " + department);
        System.out.println("Employee Salary: " + salary);
    }
}


public class EmployeeDetails {
    public static void main(String[] args) {
       
        Employee emp1 = new Employee(101, "John Doe", "HR", 50000);

        
        emp1.displayDetails();
    }
}
