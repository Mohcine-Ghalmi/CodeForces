#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int y;
    cin >> y;
    
    while (true)
    {
        y += 1;
        string num = to_string(y);
        sort(num.begin(), num.end());
        if (adjacent_find(num.begin(), num.end()) == num.end())
            break;
    }
    cout << y << endl;
    return 0;
}
