#ifndef UNIQUE_WORDS_H_
#define UNIQUE_WORDS_H_

#include <iostream>
#include <string>
#include <regex>
#include <sstream>
#include <fstream>
#include <set>

void errors(int argc);
void errNameSize(int name_size);
void fileParser(std::ifstream& file, std::set<std::string>& names);
void createFile(std::string file_name, std::set<std::string> names);
#endif //UNIQUE_WORDS_H_
