#include "src/uniqueWords.h"

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cerr << "usage: ./uniqueWords [file_name]\n";
        exit(1);
    }
    std::ifstream file(argv[1]);
    std::set<std::string> names;
    if (!file.is_open()) {
        std::cerr << "error\n";
        exit(1);
    }
    fileParser(file, names);
    errNameSize(std::distance(names.begin(), names.end()));
    createFile(argv[1], names);
    file.close();
    return 0;
}