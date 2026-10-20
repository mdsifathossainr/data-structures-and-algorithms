#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    cout << min(a, b) << endl;
    cout << min({a, b, c}) << endl;
    cout << min({30, 55, 60, 5, 25, 10}) << endl;

    cout << max(a, b) << endl;
    cout << max({a, b, c}) << endl;
    cout << max({30, 55, 60, 5, 25, 10}) << endl;

    return 0;
}