#include <iostream>              // Includes the iostream library for input and output

using namespace std;             // Allows us to use cout without std::

int add(int, int);               // Function prototype tells the compiler about the add function

int main() {                     // Main function where program execution starts

    int a = 10, b = 20;           // Declares two integer variables and stores 10 and 20

    cout << "Sum = " << add(a, b) << endl;   // Calls add function and displays the returned sum

    return 0;                     // Ends the program successfully
}

int add(int x, int y) {          // Defines the add function with two integer parameters

    return x + y;                // Adds x and y and returns the result
}