#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main(void) {
    vector<pair<string, int>> shapes = {
        {"Tetrahedron", 4}, 
        {"Cube", 6}, 
        {"Octahedron", 8}, 
        {"Dodecahedron", 12}, 
        {"Icosahedron", 20}
    };

    int n;
    vector<string> input;

    cin >> n;
    while (n--) {
        string shape;
        cin >> shape;
        input.push_back(shape);
    }

    int totalSides = 0;
    for (const string& shape : input) {
        auto it = find_if(shapes.begin(), shapes.end(), [shape](const pair<string, int> p) {
            return p.first == shape;
        });

        if (it != shapes.end())
            totalSides += it->second;
    }

    cout << totalSides << endl;
  
    return 0;
}
