#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int id;
    double gpa;

    Student(string n, int i, double g)
    {
        name = n;
        id = i;
        gpa = g;
    }
};
int main()
{
    Student s1("Mahir", 10, 3.85);
    Student s2("Meharab", 5, 3.91);

    cout << s1.name << " " << s1.id << " " << s1.gpa << " " << endl;
    cout << s2.name << " " << s2.id << " " << s2.gpa << " " << endl;

    return 0;
}