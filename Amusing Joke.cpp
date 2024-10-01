#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void) {
    string firstName, secondName, hung;

    cin >> firstName >> secondName >> hung;
    
    if (firstName.length() + secondName.length() != hung.length()) {
        cout << "NO";
        return (0);
    }

    string comb = firstName + secondName;

    sort(comb.begin(), comb.end());
    sort(hung.begin(), hung.end());

    if (hung == comb)
        cout << "YES";
    else
        cout << "NO";
  
    return 0;
}
