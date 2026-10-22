#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int id;
    double gpa;

    Student(string name, int id, double gpa)
    {
        this->name = name;
        this->id = id;
        this->gpa = gpa;
    }
};
Student fun()
{
    Student s1("Mahir", 10, 3.85);
    return s1;
}
int main()
{
    Student obj = fun();

    cout << obj.name << " " << obj.id << " " << obj.gpa << endl;

    return 0;
}