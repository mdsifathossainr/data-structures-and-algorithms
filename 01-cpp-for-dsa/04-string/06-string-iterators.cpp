#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello";

    // for(int i=0 ; i<s.size() ; i++)
    // {
    //     cout << s[i] << " ";
    // }

    cout << *s.begin() << "\n";    // H
    cout << *(s.end()-1) << "\n";  // o

    for(auto it = s.begin() ; it < s.end() ; it++)
    {
        cout << *it << " ";
    }

    return 0;
}