#include <iostream>
#include <string>
#include <vector>

int main(){
  auto string    = std::string("a, b, c");    // 分割対象の文字列
  auto separator = std::string(", ");         // 区切り文字
  auto separator_length = separator.length(); // 区切り文字の長さ

  auto list = std::vector<std::string>();

  if (separator_length == 0) {
    list.push_back(string);
  } else {
    auto offset = std::string::size_type(0);
    while (1) {
      auto pos = string.find(separator, offset);
      if (pos == std::string::npos) {
        list.push_back(string.substr(offset));
        break;
      }
      list.push_back(string.substr(offset, pos - offset));
      offset = pos + separator_length;
    }
  }

for (int i = 0; i < list.size(); ++i) {
    std::cout << list[i] << std::endl;
}
  return 0;
}
