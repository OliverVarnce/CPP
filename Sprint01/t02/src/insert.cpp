#include "visitAll.h"

void insert(int argc, char **argv, std::deque<City>& cityList) {
    for (int i = 1; i < argc; i++)
        cityList.push_back(*create(argv[i], i - 1));
}
