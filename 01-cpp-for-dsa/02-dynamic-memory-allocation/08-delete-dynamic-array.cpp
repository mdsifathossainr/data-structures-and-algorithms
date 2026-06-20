#include <bits/stdc++.h>
using namespace std;

int main()
{
    int *arr = new int[5]; // dynamic array

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    delete[] arr;  // deleted the dynamic array

    return 0;
}