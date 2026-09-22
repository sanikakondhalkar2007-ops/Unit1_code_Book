#include <iostream>              // Includes the iostream library for input and output

using namespace std;             // Allows us to use cout without std::

class Demo {                     // Defines a class named Demo

public:                          // Starts the public access section

    Demo() {                     // Defines the constructor of the Demo class

        cout << "Constructor called\n";    // Displays a message when the constructor runs
    }

    ~Demo() {                    // Defines the destructor of the Demo class

        cout << "Destructor called\n";     // Displays a message when the destructor runs
    }
};

int main() {                     // Main function where program execution starts

    Demo d;                      // Creates object d and automatically calls the constructor

    return 0;                    // Ends main and automatically calls the destructor
}