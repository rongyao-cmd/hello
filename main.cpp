//
// This program is just an example one under VCS.
// Author: Ivan Ivanov, group KE-333
// Year: 2026
//
#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "Enter A and B: ";
    cin >> a >> b;
    cout << "A + B = " << a + b << '\n';
    cout << "A - B = " << a - b << '\n';
    cout << "A * B = " << a * b << '\n';
    if (b != 0)
        cout << "A / B = " << a / b << '\n';
    else
        cout << "A / B: division by zero" << '\n';
    return 0;
}
