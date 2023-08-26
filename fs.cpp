#include <iostream>
#include <string>
#include <vector>
#include <filesystem>

// -std=c++17
//

namespace fs = std::filesystem;

void ExploreDirectory(const fs::path& directory) {
    for (const auto& entry : fs::directory_iterator(directory)) {
        if (fs::is_directory(entry)) {
            // ディレクトリの場合、再帰的に探索
            ExploreDirectory(entry.path());
        } else if (fs::is_regular_file(entry) && entry.path().extension() == ".cpp") {
            // ファイルの場合、ファイル名を表示
            std::cout << "File: " << entry.path().string() << std::endl;
        }
    }
}

int main() {
    try {
        // カレントディレクトリを取得
        fs::path currentDir = fs::current_path();

        // ディレクトリを探索
        ExploreDirectory(currentDir);
    } catch (const std::exception& ex) {
        std::cerr << "エラー: " << ex.what() << std::endl;
    }

    return 0;
}
