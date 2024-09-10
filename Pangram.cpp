#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <set>
using namespace std;

int main() {
    int numChar;
    string pangram;

    cin >> numChar;
    cin >> pangram;

    if (pangram.length() != numChar || numChar < 26) {
        cout << "NO";
        return (0);
    }
    transform(pangram.begin(), pangram.end(), pangram.begin(), ::toupper);
    
    set<char> checkPangram;

    for (string::iterator it = pangram.begin(); it < pangram.end(); it++)
        checkPangram.insert(*it);
    
    int alphaAscii = 65;
    for (set<char>::iterator it = checkPangram.begin(); it != checkPangram.end(); it++) {
        // cout << alphaAscii << " " << static_cast<int>(*it) << " " << *it << " ";
        if (static_cast<int>(*it) == alphaAscii)
            alphaAscii++;
    }
    if (alphaAscii == 91)
        cout << "YES";
    else
        cout << "NO";
    return (0);
}