#include <iostream>
#include <bits/stdc++.h> 

using namespace std;

int main() {
    int levels;
    set<int> res;
    
    cin >> levels;
    int q;
    cin >> q;
    while (q--){
        int number;
        cin >> number;
        res.insert(number);
    }
    
    int p;
    cin >> p;
    while (p--){
        int number;
        cin >> number;
        res.insert(number);
    }

    set<int>::iterator it = res.end();
    if (*it == levels)
        cout << "I become the guy.";
    else
        cout << "Oh, my keyboard!";    
    return (0);
}
