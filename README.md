# Aim: To Study and Implement Constructor Overloading

# Tool: VS CODE.

# Theory:

## Constructor Overloading in C++:

### 1. What is a Constructor?
A constructor is a special member function of a class that is automatically invoked when an object is created.

Its main purpose is to initialize the data members of the object.

It has the same name as the class and does not return any value (not even void).

### 2. What is Constructor Overloading?

Constructor Overloading means having multiple constructors in the same class with different parameter lists.

The compiler decides which constructor to call based on the number and type of arguments passed during object creation.

This is a type of Compile-Time Polymorphism (function overloading concept applied to constructors).

### 3.Why Do We Need Constructor Overloading?

In real-world problems, objects may need to be initialized in different ways.

Example:

Sometimes you only know the name of a student.

Sometimes you know name + roll number.

Sometimes you know all details (name, roll number, marks).

To handle such situations, we overload constructors with different parameter lists.

### 4. Rules for Constructor Overloading

Constructors must have the same name as the class.

Parameter list must be different (number or type).

Constructors cannot be virtual.

Constructors cannot be inherited, but derived classes can call base class constructors.

default constructor is invoked if no parameters are passed.

### 5. Types of Constructors (used in overloading)

Default Constructor – no arguments.

Parameterized Constructor – with arguments.

Copy Constructor – initializes an object using another object.

All these can coexist → that’s constructor overloading.

### 5. Example: Constructor Overloading in C++

#include <iostream>
using namespace std;

class Student {
    string name;
    int roll;
    double marks;

public:
    // Default Constructor
    Student() {
        name = "Unknown";
        roll = 0;
        marks = 0.0;
    }

    // Constructor with only name
    Student(string n) {
        name = n;
        roll = 0;
        marks = 0.0;
    }

    // Constructor with name and roll
    Student(string n, int r) {
        name = n;
        roll = r;
        marks = 0.0;
    }

    // Constructor with all values
    Student(string n, int r, double m) {
        name = n;
        roll = r;
        marks = m;
    }

    void display() {
        cout << "Name: " << name 
             << " | Roll: " << roll 
             << " | Marks: " << marks << endl;
    }
};

int main() {
    Student s1;                       // Calls default constructor
    Student s2("Yash");               // Calls constructor with 1 parameter
    Student s3("Aman", 101);          // Calls constructor with 2 parameters
    Student s4("Ravi", 102, 95.5);    // Calls constructor with 3 parameters

    s1.display();
    s2.display();
    s3.display();
    s4.display();

    return 0;
}

### 6. Output of the Program

Name: Unknown | Roll: 0 | Marks: 0

Name: Yash | Roll: 0 | Marks: 0

Name: Aman | Roll: 101 | Marks: 0

Name: Ravi | Roll: 102 | Marks: 95.5

### 7. Where is Constructor Overloading Used?

Flexibility in object creation:

Sometimes we only know partial details at creation time.

Example: Student("Yash") vs Student("Yash", 101, 95.5).

Code Reusability – reduces the need for multiple setter functions.

Readability & Ease – more natural and intuitive initialization of objects.

### 8. Advantages of Constructor Overloading

 Flexibility in object creation.
 
 Code becomes easier to understand and maintain.

 Allows partial or complete initialization.
 
 Increases readability.

 ### 9. Real-Life Example

Think of creating a Bank Account:

Sometimes you open an account with only name.

Sometimes with name + balance.

Sometimes with name + balance + account type.

Instead of writing multiple initialization functions, you simply overload constructors.

### 10. Difference: Constructor Overloading vs Function Overloading

| Feature     | Constructor Overloading | Function Overloading                           |
| ----------- | ----------------------- | ---------------------------------------------- |
| Purpose     | Initialize objects      | Perform multiple tasks with same function name |
| Return type | No return type          | Can have different return types                |
| Called when | Object is created       | Function is invoked explicitly                 |

### In short:
Constructor Overloading in C++ lets us create multiple ways to initialize objects, depending on available data. It makes classes flexible, reusable, and more practical for real-world applications. In other words, Constructor Overloading allows different ways of creating an object depending on available information. It’s just like having multiple “doors” to enter the same “room” (class).

# Algorithms:



