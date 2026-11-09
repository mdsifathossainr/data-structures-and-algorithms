#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);

    stringstream ss(s);

    string word;

    int cnt = 0;

    while(ss >> word)
    {
        cout << word << "\n";
        cnt ++;
    }

    cout << cnt << "\n";

    return 0;
}