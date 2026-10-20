/*
    Write a C++ Program to input the register number, name and combination of all the students in a class into a structure and output the data in a tabular manner with proper heading.
*/

#include <iostream>
using namespace std;

int main()
{
    struct Student
    {
        char student_name[20];
        char combination[10];
        int regno;
    } std[10];

    int n, i;
    cout << "Enter the number of students: ";
    cin >> n;
    cout << "Enter the regno, student name and combination: ";
    for (i = 0; i < n; i++)
    {
        cin >> std[i].regno >> std[i].student_name >> std[i].combination;
    }

    cout << endl;
    cout << "\t" << "The student information" << endl;
    cout << "regno\tstudent_name\tclass";
    for (i = 0; i < n; i++)
    {
        cout << std[i].regno << "\t" << std[i].student_name << "\t" << std[i].combination << endl;
    }
    return 0;
}

/*
    Output:
        Enter the number of students: 5
        Enter the regno, student name and combination: 101 Shrunga PCMCs 102 Nishitha PCMB 103 Teddy PCMB 104 Teddu PCMB 105 Visha PCMS

        The student information
        regno   student_name    class
        101     Shrunga         PCMCs
        102     Nishitha        PCMB
        103     Teddy           PCMB
        104     Teddu           PCMB
        105     Visha           PCMS
*/