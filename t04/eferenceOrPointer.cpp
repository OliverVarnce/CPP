#include "referenceOrPointer.h"

void multiplyByPointer(int* ptr, int mult) {
    if (ptr = 0)
        exit(1);
    if (ptr && *ptr)
        *ptr = *ptr * mult;
}

void multiplyByReference(int& ref, int mult) {
    ref = ref * mult;
}
