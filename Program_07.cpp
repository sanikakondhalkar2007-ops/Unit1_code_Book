#include <iostream>              // Includes the iostream library for input and output

using namespace std;             // Allows us to use cout without std::

class Student {                  // Defines a class named Student

public:                          // Starts the public access section

    static int count;            // Declares a static variable shared by all Student objects

    Student() {                  // Defines the constructor of the Student class

        count++;                 // Increases count by 1 whenever an object is created
    }
};

int Student::count = 0;          // Defines and initializes the static variable count to 0

int main() {                     // Main function where program execution starts

    Student s1, s2, s3;           // Creates three objects, so the constructor runs three times

    cout << Student::count;      // Accesses the static count using the class name and displays it

    return 0;                    // Ends the program successfully
}