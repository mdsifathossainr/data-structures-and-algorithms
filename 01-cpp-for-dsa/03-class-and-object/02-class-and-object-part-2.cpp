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
    Student a; // Object of Student class

    getline(cin, a.name);
    cin >> a.roll >> a.gpa;

    cout << a.name << " " << a.roll << " " << a.gpa;

    return 0;
}