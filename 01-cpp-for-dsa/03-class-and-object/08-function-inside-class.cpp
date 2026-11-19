#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int id;
    int math;
    int english;

    Student(string name , int id , int math , int english)
    {
        this->name = name;
        this->id = id;
        this->math = math;
        this->english = english;
    }

    void display_information()
    {
        cout << "Name : " << name << "\n";
        cout << "Id : " << id << "\n";
        cout << "Marks : " << math + english << "\n";
    }
};
int main()
{
    Student s1("Md Sifat Hossain" , 10 , 95 , 98);
    s1.display_information();

    Student s2("Md Rakib Ahmed" , 20 , 80 , 92);
    s2.display_information();

    return 0;
}