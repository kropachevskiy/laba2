// Copyright 2020 Your Name <your_email>

#include <Cache.hpp>

#include <gtest/gtest.h>

TEST(Cache, EmptyTest) {
  std::vector<Type> types {Straight, Reverse, Random};
  Cache cacher{types};
  std::cout << cacher;
