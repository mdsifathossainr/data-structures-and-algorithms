#include <bits/stdc++.h>
using namespace std;

int main()
{
    int *p = new int; // dynamic variable

    *p = 10;

    cout << *p << endl;

    delete p; // deleted the dynamic variable

    return 0;
}