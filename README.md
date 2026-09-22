OBJECT-ORIENTED PROGRAMMING WITH C++

UNIT 1: FUNDAMENTALS OF C++ AND OBJECT-ORIENTED PROGRAMMING

PRACTICAL CODE BOOK - README

Course Code: ADPC303
Program: S.Y. B.Tech. Artificial Intelligence and Data Science
Language Standard: C++17 or later

============================================================
CONTENTS

This code book contains 8 C++ programs covering basic C++
programming and introductory Object-Oriented Programming
concepts.

1. Basic Data Types
2. if-else Statement
3. Loop and Array
4. Functions
5. Class and Object
6. Constructor and Destructor
7. Static Member
8. Inline and Friend Function

============================================================
PROGRAM 1: BASIC DATA TYPES

Concept:
Basic data types are used to store different kinds of values
such as integers, characters, and decimal numbers.

Main idea:
The program stores and displays a student's roll number,
grade, and fee amount.

Data types used:

- int: Stores whole numbers
- char: Stores a single character
- float: Stores decimal numbers

Main concepts:

- Variable declaration
- Data types
- Output using cout

============================================================
PROGRAM 2: IF-ELSE

Concept:
The if-else statement is used for decision making in a
program.

Main idea:
The program checks whether a student's marks are greater than
or equal to 40.

Condition:
marks >= 40

If the condition is true:
Student is declared "Pass".

If the condition is false:
Student is declared "Fail".

Main concepts:

- Selection
- if statement
- else statement
- Conditional checking

============================================================
PROGRAM 3: LOOP AND ARRAY

Concept:
An array stores multiple values of the same data type, while
a loop can be used to process the array elements.

Main idea:
The program stores the marks of five students in an array and
prints all the marks using a for loop.

Array:
marks[5]

Main concepts:

- Array
- Array indexing
- for loop
- Index variable

Important:
Array indexing starts from 0.

============================================================
PROGRAM 4: FUNCTIONS

Concept:
A function is a reusable block of code designed to perform a
specific task.

Main idea:
The program creates an addition function that accepts two
numbers and returns their sum.

Function:
add(int x, int y)

Main concepts:

- Function declaration
- Function prototype
- Function call
- Parameters
- Return value

Example:
add(a, b)

============================================================
PROGRAM 5: CLASS AND OBJECT

Concept:
A class is a blueprint for creating objects. An object is an
instance of a class.

Class:
Student

Data members:

- name
- age

Member function:

- show()

Main idea:
The program creates a Student object, stores student details,
and displays them using a member function.

Main concepts:

- Class
- Object
- Data members
- Member function
- Dot operator (.)

Example:
Student s1;

============================================================
PROGRAM 6: CONSTRUCTOR AND DESTRUCTOR

Concept:
A constructor is automatically called when an object is
created, while a destructor is automatically called when an
object is destroyed.

Class:
Demo

Constructor:
Demo()

Destructor:
~Demo()

Main idea:
The program demonstrates the automatic execution of a
constructor and destructor.

Execution order:

Object creation
|
v
Constructor called
|
v
Program execution
|
v
Object destroyed
|
v
Destructor called

Main concepts:

- Constructor
- Destructor
- Object creation
- Object cleanup

============================================================
PROGRAM 7: STATIC MEMBER

Concept:
A static data member belongs to the class rather than to an
individual object.

Class:
Student

Static member:

- count

Main idea:
The constructor increases the shared count whenever a new
Student object is created.

Example:

Student s1, s2, s3;

The value of count becomes:

3

Main concepts:

- Static data member
- Shared class data
- Constructor
- Scope resolution operator (::)

Static member definition:

Student::count = 0;

============================================================
PROGRAM 8: INLINE AND FRIEND FUNCTION

Concept:
An inline function can be used for small functions, while a
friend function can access private members of a class when
friendship is explicitly declared.

Class:
Test

Private data member:

- value

Member function:

- getValue()

Friend function:

- show(Test t)

Main idea:
The program demonstrates accessing private data through an
inline getter and a friend function.

Main concepts:

- Private data
- Constructor
- Inline function
- Friend function
- Access to private members

============================================================
IMPORTANT C++ KEYWORDS USED

#include <iostream>
Includes the input/output stream library.

using namespace std;
Allows standard-library names such as cout to be used
without writing std:: before them.

int
Used to store whole numbers.

char
Used to store a single character.

float
Used to store decimal numbers.

if
Used to check a condition.

else
Executes when the if condition is false.

for
Used to repeat a block of code.

class
Used to define a class.

public
Specifies members that can be accessed according to the
class access rules.

private
Specifies members that can normally be accessed only
inside the class and by permitted friends.

static
Defines a class-level member shared by objects.

inline
Suggests that a small function can be expanded at its
call location.

friend
Gives a specified function or class permission to access
private and protected members.

return
Returns a value from a function or ends main().

::
Scope resolution operator used to specify a class or scope.

============================================================
MAIN OOP CONCEPTS COVERED

1. Class
   A class is a blueprint for creating objects.

2. Object
   An object is an instance of a class.

3. Constructor
   A special function automatically called when an object
   is created.

4. Destructor
   A special function automatically called when an object
   is destroyed.

5. Encapsulation
   Data and functions can be combined inside a class.

6. Static Member
   A member shared by all objects of the class.

7. Friend Function
   A function that is allowed to access private members of
   a class.

8. Inline Function
   A function intended for small operations where inline
   expansion may be useful.

============================================================
HOW TO COMPILE

Use a C++17-compatible compiler.

Example with g++:

g++ -std=c++17 filename.cpp -o program

Run on Windows:

program.exe

Run on Linux/macOS:

./program

============================================================
HOW TO RUN THE PROGRAMS

1. Open the required .cpp file in VS Code.

2. Open the terminal.

3. Compile the program using:
   
   g++ -std=c++17 filename.cpp -o program

4. Run the program.

Windows:

program.exe

Linux/macOS:

./program

============================================================
LEARNING OUTCOME

After completing these programs, students will understand:

- Basic C++ data types
- Conditional statements
- Arrays and loops
- Functions
- Classes and objects
- Constructors and destructors
- Static members
- Inline functions
- Friend functions
- Basic Object-Oriented Programming concepts

============================================================
END OF README