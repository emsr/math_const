/*
g++ -std=c++17 -o test_ext_math_const test_ext_math_const.cpp
*/

#include "ext_math_const.h"

template<typename Real>
  void
  test_ext_math_const()
  {
  }

int
main()
{
  using namespace std::constants::math_constants;
  auto foo = math_constants<double>;
}