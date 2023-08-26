#include <iostream>
#include <memory>
#include <string>

int main() {
    // std::unique_ptrを使用してstd::stringを作成
    std::unique_ptr<std::string> uniqueString = std::make_unique<std::string>("Hello, World!");

    // 別のstd::unique_ptrにコピー
    std::unique_ptr<std::string> copiedUniqueString = std::make_unique<std::string>(*uniqueString);

    // uniqueStringとcopiedUniqueStringはそれぞれ所有権を持っており、独立しています

    // 文字列を出力
    std::cout << "uniqueString: " << *uniqueString << std::endl;
    std::cout << "copiedUniqueString: " << *copiedUniqueString << std::endl;

    return 0;
}

