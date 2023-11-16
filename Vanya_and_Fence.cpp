#include <iostream>
#include <string>

using namespace std;

int main()
{
    int h,n, sum, Ni;

    Ni = 0;
    sum = 0;
    cin >> n >> h;
    for(int i = 0; i < n; i++)
    {
        cin >> Ni;
        if (Ni > h)
            sum += 2;
        else
            sum += 1;
    } 
    cout << sum;
    return 0;
}