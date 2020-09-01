
#ifndef VISITALL_H
#define VISITALL_H

#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <sstream>

struct City {
    int counter;
    std::string name;
    std::string distance;
    std::string stamina;
};

void calc(int argc, std::deque<City> cityList, std::deque<City>& cityFull);
City *create(char *str, int counter);
void insert(int argc, char **argv, std::deque<City>& cityList);
void print(std::deque<City> cityFull);
bool isNum(std::string str);
bool isStr(std::string str);

#endif //VISITALL_H




