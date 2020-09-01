#ifndef VAMPIRERABBITS_H
#define VAMPIRERABBITS_H

enum class Gender {
    Male,
    Female
};

struct Rabbit {
    Gender gender;
    bool isVampire;
    int age;
};

#endif //VAMPIRERABBITS_H
