#include <iostream>
#include <string>
#include <vector>

// 文字列を指定された区切り文字で分割し、結果をstd::vectorに格納する関数
std::vector<std::string> splitString(const std::string& input, const std::string& separator) {
    std::vector<std::string> result;
    size_t separator_length = separator.length();

    if (separator_length == 0) {
        result.push_back(input);
        return result;
    }

    size_t offset = 0;
    while (true) {
        size_t pos = input.find(separator, offset);
        if (pos == std::string::npos) {
            result.push_back(input.substr(offset));
            break;
        }
        result.push_back(input.substr(offset, pos - offset));
        offset = pos + separator_length;
    }

return result;
}

int main() {
    std::string input = "a, b, c";
    std::string separator = ", ";
    
    // splitString関数を呼び出して文字列を分割
    std::vector<std::string> parts = splitString(input, separator);

    // 分割された部分文字列を表示
    for (const std::string& part : parts) {
        std::cout << part << std::endl;
    }

    return 0;
}
