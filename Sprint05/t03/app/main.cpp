#include "src/draugr.h"

int main(int argc, char** argv) {
    Draugr d1;
    d1.setName("Death Overlord");
    d1.shoutPhrase(3);
    Draugr d3(10.0, 30);
    d3.setName("Thrall");
    d3.shoutPhrase(4);
    return 0;
}