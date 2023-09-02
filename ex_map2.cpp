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

    // マップをループで回してキー(symbol)と対応する値(元素名)を表示します。
    for (const auto& pair : elementMap) {
        const std::string& symbol = pair.first;
        const std::string& elementName = pair.second;

        std::cout << "Symbol: " << symbol << ", Element Name: " << elementName << std::endl;
    }

    return 0;
}
