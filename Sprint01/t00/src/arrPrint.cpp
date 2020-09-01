#include "simpleSort.h"

void arrPrint(std::array<std::string, 5> array) {
    for (int i = 0; i < 5; i++) {
        std::cout << array[i];
        if (i != 4)
            std::cout << " ";
    }
    std::cout << std::endl;
}
