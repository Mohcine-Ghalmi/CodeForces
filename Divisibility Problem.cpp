#include <iostream>

using namespace std;

int main(void) {
    int t;

    cin >> t;
    while (t--) {
        long long a, b;

        cin >> a >> b;
        long long q = a % b;
        if (!q)
            cout << 0 << endl;
        else
            cout << b - q << endl; 
    }
    return (0);
}
