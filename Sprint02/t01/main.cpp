#include "src/countUniqueWords.h"

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cerr << "usage: ./countUniqueWord [file_name]\n";
        exit(1);
    }

    std::ifstream file(argv[1]);
    std::multiset<std::string> names;

    if (!file.is_open()) {
        std::cerr << "error\n";
        exit(1);
    }
    parser(file, names);
    errNameSize(std::distance(names.begin(), names.end()));
    createFile(argv[1], names);
    file.close();
    return 0;
}