#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double d = 23.456789;

    cout << fixed << setprecision(2) << d << endl;

    cout << fixed << setprecision(6) << d << endl;

    return 0;
}