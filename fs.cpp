#include <iostream>
#include <string>
#include <vector>
#include <filesystem>

namespace fs = std::filesystem;

std::vector<std::string> ExploreDirectory(const fs::path& directory) {
    std::vector<std::string> fileNames;

    for (const auto& entry : fs::directory_iterator(directory)) {
        if (fs::is_directory(entry)) {
            // ディレクトリの場合、再帰的に探索
            auto subDirectoryFiles = ExploreDirectory(entry.path());
            fileNames.insert(fileNames.end(), subDirectoryFiles.begin(), subDirectoryFiles.end());
        } else if (fs::is_regular_file(entry) && entry.path().extension() == ".cpp") {
            // 拡張子が ".cpp" のファイルを追加
            fileNames.push_back(entry.path().string());
        }
    }

    return fileNames;
}

int main() {
    try {
        // カレントディレクトリを取得
        fs::path currentDir = fs::current_path();

        // ディレクトリを探索してファイル名のリストを取得
        std::vector<std::string> fileNames = ExploreDirectory(currentDir);

        // ファイル名を表示
        for (const auto& fileName : fileNames) {
            std::cout << "File: " << fileName << std::endl;
        }
    } catch (const std::exception& ex) {
        std::cerr << "エラー: " << ex.what() << std::endl;
    }

    return 0;
}
