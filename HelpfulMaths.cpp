#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::string s;
    std::cin >> s;

    std::vector<int> numbers;
    for (int i = 0; i < s.length(); i += 2) {
        numbers.push_back(s[i] - '0');
    }

    std::sort(numbers.begin(), numbers.end());

    for (int i = 0; i < numbers.size(); ++i) {
        std::cout << numbers[i];
        if (i < numbers.size() - 1) {
            std::cout << "+";
        }
    }

    return 0;
}
