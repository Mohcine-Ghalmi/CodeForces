#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void) {
    int n;
    vector<int> cand;

    cin >> n;
    while (n--) {
        int candys;

        cin >> candys;
        cand.push_back(candys);
    }

    for (int number : cand)
        cout << number - (number / 2 + 1)<< endl;
    return 0;
}
