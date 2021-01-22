// Copyright 2020 kropachevskiy <kropachev-95@mail.ru>

#include <Cache.hpp>

#include <gtest/gtest.h>

TEST(Cache, EmptyTest) {
  std::vector<Type> types {Straight, Reverse, Random};
  Cache cacher{types};
  std::cout << cacher;
