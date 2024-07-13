#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;


int main(void) {
    long long nFriends;

    cin >> nFriends;
    vector<long long> gifter(nFriends + 1);
    for (long long i = 1;i <= nFriends; i++) {
        long long i_th;

        cin >> i_th;
        gifter[i_th] = i;
    }
    cout << gifter[1];
    for(long long i = 2; i <= nFriends; i++)
        cout << " " << gifter[i];
    cout << endl;
    return (0);
}