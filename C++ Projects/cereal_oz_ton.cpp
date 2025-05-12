// Copyright CSCE 240 SU2025
//
// A metric ton is 35,273.92 ounces. Write a program which accepts the
// weight of a box of cereal in ounces and displays how many boxes would
// be required to provide one metric ton.

#include <iostream>

int main() {
  // record of size of metric ton in oz
  constexpr double oz_in_ton = 35273.92;

  // request oz in boxes of cereal
  int oz_of_cereal;
  // extraction operator: <<
  std::cout << "Enter weight of box of cereal in (whole) oz: ";
  // insertion operator: >>
  std::cin >> oz_of_cereal;

  int boxes = oz_in_ton / oz_of_cereal + 1;
  std::cout << "Total number of cereal " << boxes << " boxes." << std::endl;

  return 0;
}
