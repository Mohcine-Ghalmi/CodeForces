#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    long long n, m, i, j, sum, cnt, ans;
    while (cin >> n) {
        vector<long long> a(n);
        sum = 0;
        for (i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        sum = sum / 2;
        sort(a.begin(), a.end());
        cnt = 0;
        ans = 0;
        for (i = n - 1; i >= 0; i--) {
            ans += a[i];
            cnt++;
            if (ans > sum)
                break;
        }
        cout << cnt << endl;
    }
    return 0;
}
