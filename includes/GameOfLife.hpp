#ifndef GAMEOFLIFE_HPP
#define GAMEOFLIFE_HPP
#define MAX_WIDTH 364
#define MAX_HIGHT 82

#define WHITE "\033[0m"

#include <iostream>
#include <fstream>
#include <vector>
#include <unistd.h>

void print_map(std::vector<std::string> &v);

int error(int Case);

#endif

