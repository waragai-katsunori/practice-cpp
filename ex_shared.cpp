#include <iostream>
#include <memory>

int main() {
    // std::shared_ptrを使用して文字列を格納
    std::shared_ptr<std::string> message = std::make_shared<std::string>("Hello, World!");

    // messageをmessage2にコピーする
    std::shared_ptr<std::string> message2 = message;

    // スマートポインタを使用して文字列を出力
    std::cout << "message: " << *message << std::endl;
    std::cout << "message2: " << *message2 << std::endl;


    *message += " ようこそ世界";
    // スマートポインタを使用して文字列を出力
    std::cout << "message: " << *message << std::endl;
    std::cout << "message2: " << *message2 << std::endl;
    
    std::cout << "message: " << message << std::endl;
    std::cout << "message2: " << message2 << std::endl;
 

    // main関数の終了時に自動的にメモリが解放される

    return 0;
}
