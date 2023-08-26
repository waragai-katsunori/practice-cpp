#include <iostream>
#include <memory>
#include <string>

int main() {
    // std::unique_ptrを使用して文字列を格納
    std::unique_ptr<std::string> message = std::make_unique<std::string>("Hello, World!");

    // message2に所有権を移動
    std::unique_ptr<std::string> message2 = std::move(message);

    // messageはもう所有権を持たないため、nullptrになる
    if (!message) {
        std::cout << "messageは所有権を持たない" << std::endl;
    }

    // message2を使用して文字列を出力
    std::cout << "message2: " << *message2 << std::endl;

    // std::unique_ptrは所有権を持っており、自動的にメモリが解放される

    return 0;
}

