#include <iostream>              // Includes the iostream library for input and output

using namespace std;             // Allows us to use cout without std::

int main() {                     // Main function where program execution starts

    int marks = 45;              // Declares marks variable and stores 45

    if (marks >= 40) {           // Checks whether marks are greater than or equal to 40

        cout << "Pass";           // Displays Pass if the condition is true

    } else {                      // Executes when the if condition is false

        cout << "Fail";           // Displays Fail if marks are less than 40
    }

    return 0;                     // Ends the program successfully
}