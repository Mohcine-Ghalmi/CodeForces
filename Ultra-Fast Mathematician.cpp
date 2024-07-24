#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    string first;
    string second;

    cin >> first;
    cin >> second;

    for (int i = 0; i < first.length(); i++)
        if (first[i] == second[i])
            cout << "0";
        else
            cout << "1";
    cout << endl;
    return (0);
}
