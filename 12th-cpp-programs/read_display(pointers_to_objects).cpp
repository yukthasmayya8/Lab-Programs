/*
    Write a C++ program to create a class containing the following data members: rollno, name, and fees. Also create member functions to read and display the data using the concept of pointers to objects.
*/

#include <iostream>
#include <iomanip>
using namespace std;

class student
{
private:
    int rollno;
    char name[20];
    float fees;

public:
    void read();
    void display();
};

void student::read()
{
    cout << "Enter the roll number: ";
    cin >> rollno;
    cout << "Enter the name: ";
    cin >> name;
    cout << "Enter the fees: ";
    cin >> fees;
}

void student::display()
{
    cout << "The student roll number is: " << rollno << endl;
    cout << "The student name is: " << name << endl;
    cout << "The student fees is: " << fees << endl;
}

int main()
{
    student s, *sp;
    sp = &s;
    sp->read();
    sp->display();
    return 0;
}

/*
    Output:
        Enter the roll number: 101
        Enter the name: Shrunga
        Enter the fees: 10000
        The student roll number is: 101
        The student name is: Shrunga
        The student fees is: 10000
*/