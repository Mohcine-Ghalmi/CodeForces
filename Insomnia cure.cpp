#include <iostream>

using namespace std;

// explaining the problem 
// When the problem states "every k-th dragon," it means that the dragons that
// are damaged are at positions that are multiples of 𝑘

int main(void) {
    int k, l, m, n ,d;

    cin >> k >> l >> m >> n >> d;

    int damagedDragons = 0;

    for (int i = 1; i <= d; i++)
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
            damagedDragons++;

    cout << damagedDragons;
    return (0);
}
