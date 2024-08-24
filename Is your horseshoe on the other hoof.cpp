#include <iostream>
#include <set>

using namespace std;

int main(void) {
    long long s1, s2, s3, s4;

    cin >> s1 >> s2 >> s3 >> s4;
    
    // set removes automatically duplicated numbers
    set<long long> unique_colors;
    unique_colors.insert(s1);
    unique_colors.insert(s2);
    unique_colors.insert(s3);
    unique_colors.insert(s4);

    long long horseshoes_to_buy = 4 - unique_colors.size();
    
    cout << horseshoes_to_buy << endl;
    return (0);
}