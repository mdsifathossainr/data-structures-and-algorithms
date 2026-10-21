#include <bits/stdc++.h>
using namespace std;
int *p;
void fun()
{
    int *x = new int;
    *x = 10;
    p = x;
    cout << "Fun -> " << *p << endl; // Fun -> 10
}
int main()
{
    fun();
    cout << "Main -> " << *p << endl; // Main -> 10
    return 0;
}
