#include "countUniqueWords.h"

void errNameSize(int name_size) {
    if (name_size == 0) {
        std::cerr << "error\n";
        exit(1);
    }
}