#include "simpleSort.h"

void arrInsert(char **argv, std::array<std::string, 5>& array) {
    for (int i = 1; i < 6; ++i)
        array[i - 1] = argv[i];
}
