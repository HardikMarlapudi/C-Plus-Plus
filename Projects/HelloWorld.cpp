// Chapter 1 : C++ Basics

// #include <iostream> brings in tools to read (cin) and print (cout) to the screen.

// using namespace std; allows us to write cout instead of std::cout.

/*
    Inside main(), we delcare three variables:
    * int age: whole number
    * double height: decimal number
    * char gender: single character (like 'A' or 'B')
* We use cin to take input from the user.
* Then we use cout to display the results back.
*/

/*
#include <iostream> // for input / output
using namespace std;

int main() {

    int age;
    double height;
    char gender;

    cout << "Enter your age: " << endl;
    cin >> age;

    cout << "Enter your height: " << endl;
    cin >> height;

    cout << "Enter your gender: " << endl;
    cin >> gender;

    cout << "You are: " << age << endl;
    cout << "Your height is: " << height << endl;
    cout << "You are a: " << gender << endl;

    return 0;
}
*/

// Chapter 2 : Flow of Control

// We use if-else if to compare multiple ranges.
/*
    C++ checks these from top to bottom.
    * If score >= 90 => Grade A
    * If score < 90 => Grade B
    * If score < 80 => Grade C
    * If score < 70 => Grade D
    * If score <= 60 => Grade F
    * * The else block handles anything below 60.
*/

/*
#include <iostream>
using namespace std;

int main() {

    int grade;

    cout << "Hello there, please enter your grade to continue :) \n";
    cin >> grade;

    if(grade >= 90) {
        cout << "A" << endl;
    }
    else if(grade < 90) {
        cout << 'B' << endl;
    }
    else if(grade < 80) {
        cout << 'C' << endl;
    }
    else if(grade < 70) {
        cout << 'D' << endl;
    }
    else if(grade <= 60){
        cout << 'F' <<  endl;
    }
    else {
        cout << "Invalid gerade, please eenter a valid umber to calculate your overall grade!!!";
    }

    return 0;
}
*/

/*
#include <iostream>
using namespace std;

int main() {

    int day;

    cout << "Hi, please enter a number (1-7) for the day fo the week: " << endl;
    cin >> day;

    switch(day) {
        case 1: "Monday";
        cout << "It's Monday" << endl;
        break;
        case 2: "Tuesday";
        cout << "It's Tuesday" << endl;
        break;
        case 3: "Wednesday";
        cout << "It's Wenesday" << endl;
        break;
        case 4: "Thursday";
        cout << "It's Thursday" << endl;
        break;
        case 5: "Friday";
        cout << "It's Friday" << endl;
        break;
        case 6: 'Saturday';
        cout << "It's Saturday" << endl;
        break;
        case 7: "Sunday";
        cout << "It's Sunday" << endl;
        break;

        return 0;
    }
}
*/

// Chapter 3: Function Basics

// Code Example 1: Simple Function

/*
#include <iostream>
using namespace std;

void greetUser() {
        cout << "Hello there, welcome to the C++ tutorial" << endl;
    }

int main() {

   greetUser(); // Calls the function
   greetUser(); // Calls the function again

    return 0;
}
*/


// Code Example 2: Function with a return value

/*
#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int main() {

    int sum = add(9, 90);

    cout << "The sum of 9 and 90 is: " << sum << endl;

    return 0;
}
*/

// Chapter 4: Parameters and Overloading

// Code Example 3: Reference Parameters

/*
#include <iostream>
using namespace std;

void doubleValue(int & num) {
    num = num * 2;
}

int main() {

    int x = 10;
    doubleValue(x);
    cout << "The doubled value is: " << value << endl;
    return 0;
}
*/

// Code Example 4: Default Arguments

/*
#include <iostream>
using namespace std;

void greetUser(string name = "Guest") {
    cout << "Hello, " << name << "!" << endl;
}

int main() {

    greet("Alice");
    greetUser(); // uses default;

    return 0;
}
*/

// Code Example 5: Function Overloading

/*
#include <iostream>
using namespace std;

void print(int num) {
    cout << "Number: " << num << endl;
}

void print(string text) {
    cout << "String: " << text << endl;
}

int main() {

    print(42);
    print("C++ is fun");
    return 0;
}
*/

