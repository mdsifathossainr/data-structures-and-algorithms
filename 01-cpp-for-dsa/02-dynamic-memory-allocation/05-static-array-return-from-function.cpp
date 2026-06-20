#include <bits/stdc++.h>
using namespace std;
int *fun()
{
    int a[5]; 

    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    return a;
}
int main()
{
    int *p = fun();

    for (int i = 0; i < 5; i++)
    {
        // Accessing the returned local array causes undefined behavior because the stack memory is destroyed after the function returns.
        cout << p[i] << " ";
    }
    return 0;
}