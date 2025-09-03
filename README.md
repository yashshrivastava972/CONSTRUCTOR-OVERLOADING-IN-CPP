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

### 6. Example: Constructor Overloading in C++

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

### 7. Output of the Program

Name: Unknown | Roll: 0 | Marks: 0

Name: Yash | Roll: 0 | Marks: 0

Name: Aman | Roll: 101 | Marks: 0

Name: Ravi | Roll: 102 | Marks: 95.5

### 8. Where is Constructor Overloading Used?

Flexibility in object creation:

Sometimes we only know partial details at creation time.

Example: Student("Yash") vs Student("Yash", 101, 95.5).

Code Reusability – reduces the need for multiple setter functions.

Readability & Ease – more natural and intuitive initialization of objects.

### 9. Advantages of Constructor Overloading

 Flexibility in object creation.
 
 Code becomes easier to understand and maintain.

 Allows partial or complete initialization.
 
 Increases readability.

 ### 10. Real-Life Example

Think of creating a Bank Account:

Sometimes you open an account with only name.

Sometimes with name + balance.

Sometimes with name + balance + account type.

Instead of writing multiple initialization functions, you simply overload constructors.

### 11. Difference: Constructor Overloading vs Function Overloading

| Feature     | Constructor Overloading | Function Overloading                           |
| ----------- | ----------------------- | ---------------------------------------------- |
| Purpose     | Initialize objects      | Perform multiple tasks with same function name |
| Return type | No return type          | Can have different return types                |
| Called when | Object is created       | Function is invoked explicitly                 |

### In short:
Constructor Overloading in C++ lets us create multiple ways to initialize objects, depending on available data. It makes classes flexible, reusable, and more practical for real-world applications. In other words, Constructor Overloading allows different ways of creating an object depending on available information. It’s just like having multiple “doors” to enter the same “room” (class).

# Algorithms:

## 1. Algorithm: Constructor Overloading Example

Start the program.

Define a class Add.

Inside the class, declare three overloaded constructors:

Add(int a, int b) → adds two integers and prints the result.

Add(float a, float b) → adds two float numbers and prints the result.

Add(int a, int b, int c) → adds three integers and prints the result.

In the main() function:

Create object object1 with parameters (5, 6).

Since both are integers, the constructor with two int parameters is called, and result 5 + 6 = 11 is printed.

Create object object2 with parameters (5.5f, 6.5f).

Since both are floats, the constructor with two float parameters is called, and result 12.0 is printed.

Create object object3 with parameters (1, 2, 3).

Since three integers are passed, the constructor with three int parameters is called, and result 6 is printed.

End program.

## 2. Algorithm: Student Constructor Overloading

Start the program.

Define a class Student.

Data members:

name → string

rollno → integer

marks → double

Constructors:

Student(string n)

Assigns name = n

Sets default values: rollno = 0, marks = 0.0

Student(string n, int r, double m)

Assigns name = n, rollno = r, marks = m

Member function:

display() → Prints name, rollno, and marks.

In the main() function:

Create object s1 using first constructor with only name = "Yash".

Other values set to defaults (rollno = 0, marks = 0.0).

Create object s2 using second constructor with all values (name = "Yash", rollno = 137, marks = 95.5).

Print details of s1 using display().

Print details of s2 using display().

End program.

## 3. Algorithm: Function Overloading (Square & Multiplication)

Start the program.

Define a class Math.

Member functions:

square(int x)

Returns the square of a number: x * x.

multiply(int x, int y)

Returns the product of two integers: x * y.

multiply(int x, int y, int z)

Returns the product of three integers: x * y * z.

In the main() function:

Create an object obj of class Math.

Call obj.square(5) → computes 5 * 5 = 25.

Call obj.multiply(3, 4) → computes 3 * 4 = 12.

Call obj.multiply(2, 3, 4) → computes 2 * 3 * 4 = 24.

Print the results on the screen.

End the program.

## 4. Algorithm: Calculator Function Overloading

Start the program.

Define a class Calculator.

Member functions:

int add(int a, int b)

Returns the sum of two integers.

double add(double a, double b)

Returns the sum of two doubles.

double add(double a, double b, double c)

Returns the sum of three doubles.

In the main() function:

Create an object obj of class Calculator.

Call obj.add(5, 10) → chooses the int add(int, int) function.

Call obj.add(3.5, 4.2) → chooses the double add(double, double) function.

Call obj.add(2.2, 3.3, 4.4) → chooses the double add(double, double, double) function.

Display results on the screen.

End program.

## 5. Algorithm: Operator Overloading for Complex Numbers

Start the program.

Define a class Complex.

Private data members:

real → integer part of the complex number.

imag → imaginary part of the complex number.

Constructor:

Complex(int r = 0, int i = 0)

Initializes real = r, imag = i.

Default values (0) make it possible to create objects without arguments.

Operator Overloading Function:

Complex operator+(Complex const& obj)

Creates a temporary object res.

Adds corresponding parts:

res.real = real + obj.real

res.imag = imag + obj.imag

Returns the result object res.

Member function print():

Displays complex number in the form:

real + imag i

In the main() function:

Create c1(10, 5) → complex number 10 + 5i.

Create c2(2, 4) → complex number 2 + 4i.

Perform c3 = c1 + c2 → calls overloaded operator+.

Calculation: (10 + 2) + (5 + 4)i = 12 + 9i.

Print c3 → output is 12 + 9i.

End program.

## 6. Algorithm: Prefix Increment Operator Overloading

Start the program.

Define a class Counter.

Private data member:

value → integer counter.

Constructor:

Counter(int v = 0) → initializes value = v.

Default parameter (0) allows creating objects without arguments.

Overloaded Operator Function:

Counter operator++() → defines prefix increment.

Increments value by 1 (++value).

Returns the updated object (*this).

Member Function:

show() → prints the current value of the counter.

In the main() function:

Create object c1(5) → initializes counter with value = 5.

Print value before increment → 5.

Apply prefix increment: ++c1.

Calls overloaded operator++().

Updates value to 6.

Print value after increment → 6.

End program.

# Conclusion:
Constructor overloading in C++ provides flexibility by allowing multiple ways to initialize objects of a class.

It enables the creation of objects with different sets of initial data (default, partial, or full).

It is an example of compile-time polymorphism, as the compiler selects the appropriate constructor based on the argument list.

This makes programs more readable, reusable, and user-friendly, while avoiding redundant code.

In simple words: Constructor overloading allows us to create objects in different situations using a single class with multiple constructors.
