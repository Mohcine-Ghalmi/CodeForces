#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{
    int n;
    int input;

    cin >> n;
    while (n--)
    {
        cin >> input;
        if (input == 1)
        {
            cout << "HARD";
            return (0);
        }
    }
    cout << "EASY";
    return (0);
}
