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
int main()
{
    Student *s1 = new Student("Mahir", 10, 3.85);
    Student *s2 = new Student("Meharab", 5, 3.91);

    cout << s1->name << " " << s1->id << " " << s1->gpa << " " << endl;
    cout << s2->name << " " << s2->id << " " << s2->gpa << " " << endl;

    delete s1;
    delete s2;

    return 0;
}