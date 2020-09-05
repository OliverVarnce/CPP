#ifndef UNIQUEWORDS_H
#define UNIQUEWORDS_H

#include <set>
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <iterator>
#include <regex>
#include <map>

void tesLibrary(std::string file);
void readFile(std::ifstream& file_stream, std::multimap<std::string, std::string>&multimap);
void print(std::multimap<std::string, std::string>& multimap);

#endif
