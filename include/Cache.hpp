// Copyright 2020 Your Name <your_email>

#ifndef INCLUDE_CACHE_HPP_
#define INCLUDE_CACHE_HPP_
#include <iostream>
#include <string>
#include <chrono>
#include <vector>
#include <set>
#include <cmath>
#include <sstream>

const int Size[3]{256, 1024, 8192}; /* 256Kb, 1024Mb, 8192Mb*/
const int Research{3};
const int Kb_in_Mb{1024};
const int byte_in_Kb{1024};
const int byte_in_int{4};
const int int_in_line{16};

enum Type {
  Straight, Reverse, Random
};

class Cache {
 private:
  int Num_Exp = 0;
  std::vector<std::vector<int>> Duration;
  std::vector<int> Exp_Size;
  std::vector<std::string> Buffer_Size;
  std::string Exp_Name[Research];

 public:
  explicit Cache(std::vector<Type>);

  void Find_Exp_Size();

  friend std::ostream& operator<<(std::ostream&, const Cache&);
};
#endif // INCLUDE_CACHE_HPP