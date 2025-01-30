import java.util.ArrayList;
import java.util.Scanner;

class Student {
    private int id;
    private String name;
    private int age;
    private String course;

    
    public Student(int id, String name, int age, String course) {
        this.id = id;
        this.name = name;
        this.age = age;
        this.course = course;
    }

  
    public int getId() {
        return id;
    }

    public String getName() {
        return name;
    }

    public int getAge() {
        return age;
    }

    public String getCourse() {
        return course;
    }

  
    public void displayInfo() {
        System.out.println("ID: " + id + ", Name: " + name + ", Age: " + age + ", Course: " + course);
    }
}


public class StudentManagement {
    private static ArrayList<Student> students = new ArrayList<>();
    private static Scanner scanner = new Scanner(System.in);


    private static void addStudent() {
        System.out.print("Enter Student ID: ");
        int id = scanner.nextInt();
        scanner.nextLine(); // Consume newline
        System.out.print("Enter Student Name: ");
        String name = scanner.nextLine();
        System.out.print("Enter Age: ");
        int age = scanner.nextInt();
        scanner.nextLine(); // Consume newline
        System.out.print("Enter Course: ");
        String course = scanner.nextLine();

        students.add(new Student(id, name, age, course));
        System.out.println("Student added successfully!\n");
    }

  
    private static void displayStudents() {
        if (students.isEmpty()) {
            System.out.println("No students available.");
            return;
        }
        System.out.println("\nStudent List:");
        for (Student student : students) {
            student.displayInfo();
        }
        System.out.println();
    }

    private static void searchStudent() {
        System.out.print("Enter Student ID to search: ");
        int searchId = scanner.nextInt();
        boolean found = false;

        for (Student student : students) {
            if (student.getId() == searchId) {
                System.out.println("\nStudent Found:");
                student.displayInfo();
                found = true;
                break;
            }
        }

        if (!found) {
            System.out.println("Student with ID " + searchId + " not found.\n");
        }
    }

  
    private static void removeStudent() {
        System.out.print("Enter Student ID to remove: ");
        int removeId = scanner.nextInt();
        boolean removed = false;

        for (Student student : students) {
            if (student.getId() == removeId) {
                students.remove(student);
                System.out.println("Student removed successfully!\n");
                removed = true;
                break;
            }
        }

        if (!removed) {
            System.out.println("Student with ID " + removeId + " not found.\n");
        }
    }

    public static void main(String[] args) {
        while (true) {
            System.out.println("==== Student Management System ====");
            System.out.println("1. Add Student");
            System.out.println("2. Display All Students");
            System.out.println("3. Search Student by ID");
            System.out.println("4. Remove Student");
            System.out.println("5. Exit");
            System.out.print("Choose an option: ");
            int choice = scanner.nextInt();

            switch (choice) {
                case 1:
                    addStudent();
                    break;
                case 2:
                    displayStudents();
                    break;
                case 3:
                    searchStudent();
                    break;
                case 4:
                    removeStudent();
                    break;
                case 5:
                    System.out.println("Exiting program...");
                    scanner.close();
                    System.exit(0);
                default:
                    System.out.println("Invalid choice! Please try again.\n");
            }
        }
    }
}
