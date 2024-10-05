#include <iostream>
#include <math.h>

using namespace std;

int main(void) {
    int x1, x2, x3;

    cin >> x1 >> x2 >> x3;

    int s1 = abs(x1 - x3) + abs(x2 - x3);
    int s2 = abs(x1 - x2) + abs(x3 - x2);
    int s3 = abs(x2 - x1) + abs(x3 - x1);

    if (s1 < s2 && s1 < s3)
        cout << s1;
    else if (s2 < s1 && s2 < s3)
        cout << s2;
    else
        cout << s3; 

    return (0);
}