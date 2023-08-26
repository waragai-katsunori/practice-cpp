#include <iostream>
#include <fstream>
#include <vector>
#include <string>

/**
 * ファイルから行を読み込んてvectorに格納する関数。
 * 
 * @param filename 読み込むファイルの名前
 * @return 読み込んだ行のvector
 */
std::vector<std::string> readLinesFromFile(const std::string& filename) {
    std::vector<std::string> lines;
    
    std::ifstream inputFile(filename);
    if (!inputFile.is_open()) {
        std::cerr << "ファイルを開けませんでした: " << filename << std::endl;
        return lines;  // 空の vector を返す
    }

    std::string line;
    while (std::getline(inputFile, line)) {
        lines.push_back(line);
    }

    inputFile.close();

    return lines;
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "usage: " << argv[0] << " file_name" << std::endl;
        return 1;  // エラーコード1でプログラム終了
    }

    std::string filename = argv[1];

    // ファイルから行を読み込んでvectorに格納
    std::vector<std::string> lines = readLinesFromFile(filename);

    // 読み込んだデータを表示
    for (const std::string& line : lines) {
        std::cout << line << std::endl;
    }

    return 0;
}

