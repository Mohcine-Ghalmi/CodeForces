#include <iostream>
#include <vector>

using namespace std;

void addends(int number) {
    int newNumbe = number, i = 0;
    vector<int> addends;

    while (newNumbe) {
        i++;
        if (newNumbe >= 1000) {
            addends.push_back(newNumbe - newNumbe % 1000);
            newNumbe = newNumbe % 1000;
        } else if (newNumbe >= 100) {
            addends.push_back(newNumbe - newNumbe % 100);
            newNumbe = newNumbe % 100;
        }else if (newNumbe >= 10) {
            addends.push_back(newNumbe - newNumbe % 10);
            newNumbe = newNumbe % 10;
        }else {
            addends.push_back(newNumbe);
            newNumbe = newNumbe % 1;
        }
    }

    cout << i << endl;
    for (vector<int>::iterator it = addends.begin(); it != addends.end(); it++)
        cout << *it << " ";
    cout << endl;

}

int main(void) {
    int n;
    vector<int> nums;

    cin >> n;

    while (n--) {
        int number;

        cin >> number;
        nums.push_back(number);
    }

    for (vector<int>::iterator it = nums.begin(); it != nums.end(); it++)
        addends(*it);

    return (0);
}