#include <iostream>
#include <string>
#include <set>
#include <sstream>

int main() {
    std::string input;
    std::getline(std::cin, input);

    if (input.size() > 2) {
        input = input.substr(1, input.size() - 2);
    } else {
        std::cout << 0 << std::endl;
        return 0;
    }

    std::set<char> uniqueLetters;

    std::stringstream ss(input);
    std::string letter;

    while (std::getline(ss, letter, ' ')) 
        if (!letter.empty())
            uniqueLetters.insert(letter[0]); 

    std::cout << uniqueLetters.size() << std::endl;

    return 0;
}
