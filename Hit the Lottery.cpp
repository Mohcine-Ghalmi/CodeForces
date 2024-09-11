#include <iostream>

using namespace std;

int main(void) {
    long long balance;

    cin >> balance;

    int withdraw = 0;
    while (balance > 0) {
        if (balance >= 100) {
            balance -= 100;
            withdraw++;
        }else if (balance >= 20) {
            balance -= 20;
            withdraw++;
        }else if (balance >= 10) {
            balance  -= 10;
            withdraw++;
        }else if (balance >= 5) {
            balance -= 5;
            withdraw++;
        }else {
            balance--;
            withdraw++;
        }
    }
    cout << withdraw;
    return(0);
}