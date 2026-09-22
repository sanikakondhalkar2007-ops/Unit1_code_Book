#include <iostream>              // Includes the iostream library for input and output

using namespace std;             // Allows us to use cout without std::

int main() {                     // Main function where program execution starts

    int marks[5] = {78, 82, 91, 67, 88};   // Creates an array of 5 integers and stores marks

    for (int i = 0; i < 5; i++) {           // Loop runs from index 0 to index 4

        cout << marks[i] << " ";             // Displays each array element using its index
    }

    return 0;                     // Ends the program successfully
}