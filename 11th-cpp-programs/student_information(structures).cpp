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
        cin >> std[i].regno >> std[i].student_name >> std[i].combination >> endl;
    }

    cout << endl << "\t"<<"The student information" << endl;
    cout << "regno\tstudent_name\tclass";
    for (i = 0; i < n; i++)
    {
        cout << std[i].regno << "\t" << std[i].student_name << "\t" << std[i].combination << endl;
    }
    return 0;
}

