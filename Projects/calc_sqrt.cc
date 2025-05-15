// calc_sqrt.cc
//
// Revisit the Babylonian square root calculation:
// 1.) Guess at the correct square root (n/2 maybe?)
// 2.) Calculate root = n / guess
// 3.) Let guess = (guess + root)/2
// 4.) Repeat steps 2 and 3 until the square root is resolved.
//
// This time, however, use a loop and define what it means to be "resolved".
//

#include <cmath>
#include <iostream>

int main() {
    constexr double kEpsilon = 0.000000001;
    std::cout << "Enter a value: ";
    double value;
    std::cout >> value; // operator>>(std::cin, value);

    double guess = 0.5 * value;
    double root = value / guess;
    guess = 0.5 * (guess + root);
    do {
        root = value / guess;
        guess = 0.5 * (guess + root);
    }
    std::cout << "The square root of " << value << " is " << guess << std::endl;
}
