/*
Create a Java class called Student with the USN, Name, Branch, Phone details as variables within it.
Write a Java program to create N Student objects and print the USN, Name, Branch, and Phone of these objects with suitable headings.
*/

import java.util.Scanner;

class Student {
    private String usn;
    private String name;
    private String branch;
    private String phone;

    public Student(String usn, String name, String branch, String phone) {
        this.usn = usn;
        this.name = name;
        this.branch = branch;
        this.phone = phone;
    }

    public String getUsn() {
        return usn;
    }

    public String getName() {
        return name;
    }

    public String getBranch() {
        return branch;
    }

    public String getPhone() {
        return phone;
    }
}

public class StudentDemo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter number of students: ");
        int n = Integer.parseInt(sc.nextLine().trim());

        Student[] students = new Student[n];

        for (int i = 0; i < n; i++) {
            System.out.println("\nEnter details of student " + (i + 1) + ":");

            System.out.print("USN: ");
            String usn = sc.nextLine();

            System.out.print("Name: ");
            String name = sc.nextLine();

            System.out.print("Branch: ");
            String branch = sc.nextLine();

            System.out.print("Phone: ");
            String phone = sc.nextLine();

            students[i] = new Student(usn, name, branch, phone);
        }

        System.out.println("\n" + String.format("%-12s%-15s%-10s%-15s",
                "USN", "Name", "Branch", "Phone"));

        System.out.println("----------------------------------------------------");

        for (Student s : students) {
            System.out.println(String.format("%-12s%-15s%-10s%-15s",
                    s.getUsn(), s.getName(), s.getBranch(), s.getPhone()));
        }

        sc.close();
    }
}

/*
    Output:

    Enter number of students: 2

    Enter details of student 1:
    USN: 4SM25CS001
    Name: Ananya
    Branch: CSE
    Phone: 9876543210

    Enter details of student 2:
    USN: 4SM25CS002
    Name: Kavya
    Branch: CSE
    Phone: 9876543211

    USN         Name           Branch    Phone
    ----------------------------------------------------
    4SM25CS001  Ananya         CSE       9876543210
    4SM25CS002  Kavya          CSE       9876543211
*/