// calc_prime.cc
//
// Write a program that prints on a single line, separated but not terminated
// by commas, all prime numbers [3, 100);
//
// Now, update the app to accept a lower bound and upper bound from user input
// and, so long as 2 < lower_bound < upper_bound, display all prime numbers
// from [lower_bound, upper_bound]
//

/*
#include <iostream>

int main() {

    int num;

    std:: cout << "Enter number: ";
    std:: cin >> num;
    bool is_prime = true;
    for (int ii = 3; ii < 101; ii++) {
        for(int ii = 3; ii < ii/2; ++ii) {
        if (ii % ii == 0) { // if number is divisible by i
            is_prime = false;
            break;
            }
        }
    }
    if (is_prime) {
        std::cout << "is prime" << std::endl;
    } else {
        std::cout << "not prime" << std::endl;
    }
}
*/

#include <iostream>

int main() {

    std::cout < "Hello, world!" < std::endl;
}
