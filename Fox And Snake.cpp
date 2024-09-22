#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    int n, m;

    cin >> n >> m ;
    int dots = 0;
    while (n--) {
        if (n % 2 == 0)
            for (int i = 0; i < m; i++)
                cout << "#";
        else
            if (dots % 2 == 0) {
                for (int i = 0; i < m - 1; i++)
                    cout << ".";
                dots += 1;
                cout << "#";  
            }else {
                cout << "#";  
                for (int i = 1; i < m; i++)
                    cout << ".";
                dots += 1;
            }
        cout << endl;
    }
        
}