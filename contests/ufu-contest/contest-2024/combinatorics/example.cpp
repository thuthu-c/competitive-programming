#include <iostream>
#include <vector>
#include <sstream>

void generateCombinations(const std::vector<std::string>& elements, int start, int k, std::vector<std::string>& current, std::vector<std::vector<std::string>>& result) {
    if (k == 0) {
        std::stringstream ss;
        for (int i = 0; i < current.size(); ++i) {
            ss << current[i];
            if (i < current.size() - 1) {
                ss << ",";
            }
        }
        result.push_back(current);
        std::cout << ss.str() << std::endl;
        return;
    }

    for (int i = start; i < elements.size(); ++i) {
        current.push_back(elements[i]);
        generateCombinations(elements, i + 1, k - 1, current, result);
        current.pop_back();
    }
}

int main() {
    std::string input;
    std::getline(std::cin, input);

    std::vector<std::string> elements;
    std::stringstream ss(input);
    std::string element;
    while (std::getline(ss, element, ',')) {
        elements.push_back(element);
    }

    std::vector<std::string> current;
    std::vector<std::vector<std::string>> result;

    for (int k = 1; k <= elements.size(); ++k) {
        generateCombinations(elements, 0, k, current, result);
    }

    return 0;
}
