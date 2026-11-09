#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello World";

    cout << s.find('l') << "\n";     // 2
    cout << s.find('W') << "\n";     // 6
    cout << s.find("World") << "\n"; // 6

    if(s.find('z') == string :: npos)
    {
        cout << "Not Found" << "\n";
    }
    else
    {
        cout << "Found" << "\n";
    }

    s.erase(5);
    cout << s << "\n";  // Hello

    s.erase(1,2);       // (indx , len)
    cout << s << "\n";  // Hlo

    s.erase(0,1);
    cout << s << "\n";  // lo


    s.replace(1,1,"emon");
    cout << s << "\n";  // lemon


    s.insert(0,"hi ");
    cout << s << "\n";  // hi lemon
    
    return 0;
}