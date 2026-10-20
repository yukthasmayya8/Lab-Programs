/*
    Write a C++ program to create a base class student with data members rollno and name. Also create a member function to read and display student information using the concept of single level inheritance. Create a derived class that contains marks of 2 subjects and total markks as the data members.
*/

#include <iostream>
#include <iomanip>
using namespace std;

class student
{
private:
    int rollno;
    char name[20];

public:
    void read()
    {
        cout << "Enter the roll number and name: ";
        cin >> rollno >> name;
    }
    void display()
    {
        cout << "The student rollno is: " << rollno << endl;
        cout << "The student name is: " << name << endl;
    }
};

class marks : public student
{
private:
    int m1, m2, total;

public:
    void read1()
    {
        cout << "Enter the marks of 2 subjects: ";
        cin >> m1 >> m2;
        total = m1 + m2;
    }
    void display1()
    {
        cout << "The marks of subject 1 is: " << m1 << endl;
        cout << "The marks of subject 2 is: " << m2 << endl;
        cout << "The total marks is: " << total << endl;
    }
};

int main()
{
    marks m;
    m.read();
    m.read1();
    m.display();
    m.display1();
    return 0;
}

/*
    Output:
        Enter the roll number and name: 101 Shrunga
        Enter the marks of 2 subjects: 90 95
        The student rollno is: 101
        The student name is: Shrunga
        The marks of subject 1 is: 90
        The marks of subject 2 is: 95
        The total marks is: 185
*/