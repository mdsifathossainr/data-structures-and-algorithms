#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int id;

    Student(string name, int id)
    {
        this->name = name;
        this->id = id;
    }
};
int main()
{
    Student *s1 = new Student("Sakib", 10);
    Student *s2 = new Student("Rakib", 20);


    // Pointer assignment (both point to the same object)
    // s1 = s2;
    // delete s2;
    // cout << s1->name << " " << s1->id << endl;  // Segmentation fault


    // Individual data copying
    // s1->name = s2->name;
    // s1->id = s2->id;
    // delete s2;

    
    // Complete object assignment
    *s1 = *s2;
    delete s2;

    cout << s1->name << " " << s1->id << endl;

    return 0;
}