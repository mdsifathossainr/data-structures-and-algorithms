#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int roll;
    double gpa;
};
int main()
{
    Student a, b; // Objects of Student class
    a.name = "Meharab";
    a.roll = 10;
    a.gpa = 3.91;

    cin >> b.name >> b.roll >> b.gpa;

    cout << a.name << " " << a.roll << " " << a.gpa << endl;
    cout << b.name << " " << b.roll << " " << b.gpa << endl;

    return 0;
}