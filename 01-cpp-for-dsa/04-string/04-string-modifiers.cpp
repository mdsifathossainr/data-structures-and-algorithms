#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello";
    string s2 = " World";

    // string s3;
    // s3.assign("Hi");  // Hi
    // cout << s3 << "\n";

    s += s2;

    // s.append(s2);

    cout << s << "\n";  // Hello World

    s.push_back('!');

    cout << s << "\n";  // Hello World!

    s.pop_back();

    cout << s << "\n";  // Hello World

    return 0;
}