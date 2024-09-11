#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
    int         n;
    vector<int> soldiers;

    cin >> n;
    
    for (int i = 0; i < n; ++i) {
        int soldNum;

        cin >> soldNum;
        soldiers.push_back(soldNum);
    }

    int maxIndex = distance(soldiers.begin(), max_element(soldiers.begin(), \
                    soldiers.end()));
    int minIndex = distance(soldiers.begin(), find(soldiers.rbegin(), \
                    soldiers.rend(), *min_element(soldiers.begin(), \
                    soldiers.end())).base() - 1);
    int swaps = maxIndex + (n - 1 - minIndex);

    if (maxIndex > minIndex)
        swaps -= 1;

    cout << swaps << endl;

    return 0;
}
