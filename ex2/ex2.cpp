#include <iostream>
#include <memory>

int main() {
    std::shared_ptr<std::string> message = std::make_shared<std::string>("Hello, World!");

    std::shared_ptr<std::string> copiedMessage = message;  // スマートポインタをコピー

    std::cout << "Original: " << *message << std::endl;
    std::cout << "Copied: " << *copiedMessage << std::endl;

    return 0;
}

