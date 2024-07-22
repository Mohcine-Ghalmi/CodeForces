#include <iostream>
#include <iomanip>

using namespace std;

int main(void) {
    long double n; // drinks in the fridge 
    long double volFrac = 0;
    cin >> n;
    for (long double i = 0 ; i < n; i++) {
        long double drink;
        cin >> drink;
        volFrac += drink;
    }

    cout << volFrac / n << endl;
    return (0);
}
