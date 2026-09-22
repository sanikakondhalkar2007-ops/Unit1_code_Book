#include <iostream>              // Includes the iostream library for input and output

using namespace std;             // Allows us to use cout without std::

class Student {                  // Defines a class named Student

public:                          // Starts the public access section of the class

    string name;                 // Declares a string data member to store student's name

    int age;                     // Declares an integer data member to store student's age

    void show() {                // Defines a member function named show()

        cout << name << " " << age << endl;   // Displays the student's name and age
    }
};

int main() {                     // Main function where program execution starts

    Student s1;                  // Creates an object s1 of the Student class

    s1.name = "Amit";            // Assigns "Amit" to the name of object s1

    s1.age = 20;                 // Assigns 20 to the age of object s1

    s1.show();                   // Calls the show() function using the object s1

    return 0;                    // Ends the program successfully
}