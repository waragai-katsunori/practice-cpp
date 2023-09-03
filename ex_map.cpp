#include <iostream>
#include <map>
#include <string>

int main() {
    // std::mapを使用して元素記号から元素名へのマッピングを作成します。
    std::map<std::string, std::string> elementMap;
    elementMap["H"] = "Hydrogen";
    elementMap["O"] = "Oxygen";
    elementMap["N"] = "Nitrogen";
    elementMap["C"] = "Carbon";

    // 元素記号を入力して、対応する元素名を取得します。
    std::string symbol;
    std::cout << "Enter an element symbol (H, O, N, C): ";
    std::cin >> symbol;

    // マップを使用して元素名を取得し、表示します。
    if (elementMap.find(symbol) != elementMap.end()) {
        std::cout << "Element Name: " << elementMap[symbol] << std::endl;
    } else {
        std::cout << "Element not found." << std::endl;
    }

    return 0;
}
