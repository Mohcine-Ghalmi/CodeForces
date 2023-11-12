#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{
    string A;
    string B;

    cin >> A;
    cin >> B;
    reverse(B.begin(), B.end());
    if (B == A)
        cout << "YES";
    else
        cout << "NO";
    return (0);
}