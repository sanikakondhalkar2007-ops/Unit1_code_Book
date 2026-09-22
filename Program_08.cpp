#include <iostream>              // Includes the iostream library for input and output

using namespace std;             // Allows us to use cout without std::

class Test {                     // Defines a class named Test

private:                         // Starts the private access section

    int value;                   // Declares a private integer variable named value

public:                          // Starts the public access section

    Test(int v) {                // Defines a parameterized constructor

        value = v;               // Assigns the constructor parameter v to value
    }

    inline int getValue() {      // Defines an inline function to return the private value

        return value;            // Returns the value stored in the private variable
    }

    friend void show(Test t);    // Declares show() as a friend function of the Test class
};

void show(Test t) {              // Defines the friend function show()

    cout << t.value;             // Friend function can directly access the private value
}

int main() {                     // Main function where program execution starts

    Test obj(50);                // Creates object obj and passes 50 to the constructor

    cout << obj.getValue() << endl;   // Calls the inline function and displays the value

    show(obj);                   // Calls the friend function and displays the private value

    return 0;                    // Ends the program successfully
}