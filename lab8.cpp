#include <iostream>
#include <map>
#include <vector>
#include <string>

std::map<int, std::vector<std::string>> invertMap(const std::map<std::string, int>& inputMap) {
    std::map<int, std::vector<std::string>> result;

    for (auto pair : inputMap) {
        int value = pair.second;
        std::string key = pair.first;

        result[value].push_back(key);
    }

    return result;
}

int main() {
    std::map<std::string, int> inputMap;
    inputMap["apple"] = 1;
    inputMap["banana"] = 2;
    inputMap["orange"] = 1;
    inputMap["grape"] = 3;

    std::map<int, std::vector<std::string>> invertedMap = invertMap(inputMap);

    for (auto pair : invertedMap) {
        int key = pair.first;
        std::cout << key << ": ";
        
        for (int i = 0; i < pair.second.size(); i++) {
            std::cout << pair.second[i] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
