#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{
    int nRoom;
    int some;

    cin >> nRoom;
    some = nRoom;
    for (int i = 0; i < nRoom; i++)
    {
        int qi, pi;
        cin >> pi >> qi;
        if (qi - pi <=  1)
            some--;
    }
    cout << some;
    return (0);
}
