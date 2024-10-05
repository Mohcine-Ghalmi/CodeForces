#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    int n;
    int free_officers = 0,untreated_crimes = 0;
    vector<int> police;

    cin >> n;
    while (n--) {
        int input;

        cin >> input;
        police.push_back(input);
    }

    for (int value : police) {
        if (value == -1)
            if (free_officers > 0)
                free_officers -= 1;
            else
                untreated_crimes += 1;
        else
            free_officers += value;
    }

    cout << untreated_crimes;

    return (0);
}
