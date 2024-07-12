#include <iostream>
#include <string>
#include <vector>
#include <math.h>

using namespace std;
//  to do:
//         - implement the math function 
//                 -> f(n) =  - 1 + 2 - 3 + .. + ( - 1)^n n 
//         f(4) =  - 1 + 2 - 3 + 4 = 2
//         f(5) =  - 1 + 2 - 3 + 4 - 5 =  - 3

long long function(long long n) {
    if (n % 2 == 0)
        return (n / 2);
    return (((n + 1) / 2) * (-1));
}

int main(void) {
    long long n;

    cin >> n;
    cout << function(n) << endl;
    return (0);
}