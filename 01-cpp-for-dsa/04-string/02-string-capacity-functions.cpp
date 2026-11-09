#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello World";
    
    cout << s.size() << "\n";

    cout << s.max_size() << "\n";

    cout << s.capacity() << "\n";
     
    s.resize(5);

    cout << s << "\n";

    cout << s.empty() << "\n";

    s.clear();

    cout << s.empty() << "\n";

    if(s.empty())
    {
        cout << "Empty" << "\n";
    }
    else
    {
        cout << "Not Empty" << "\n";
    }

    return 0;
}