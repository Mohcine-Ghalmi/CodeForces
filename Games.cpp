#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
    int n;

    cin >> n;
    vector<int> home_uniform(n);
    vector<int> guest_uniform(n);

    for (int i = 0; i < n; i++)
        cin >> home_uniform[i] >> guest_uniform[i];

    int count = 0;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (i != j) 
                if (home_uniform[i] == guest_uniform[j])
                    count++;

    cout << count << endl;

    return 0;
}