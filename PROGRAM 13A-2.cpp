#include <iostream>
using namespace std;

class Student {
    string name;
    int rollno;
    double marks;

public:

    Student(string n) {
        name = n;
        rollno = 0;   
        marks = 0.0;  
    }

    Student(string n, int r, double m) {
        name = n;
        rollno = r;
        marks = m;
    }

    void display() {
        cout << "Name: " << name
             << "\nRoll No: " << rollno
             << "\nMarks: " << marks << "\n\n";
    }
};

int main() {
    // Partial Information
    Student s1("Yash");  
    
    // Full Information
    Student s2("Yash", 137, 95.5);

    cout << "Student 1 details:\n";
    s1.display();

    cout << "Student 2 details:\n";
    s2.display();

    return 0;
}

// OUTPUT:

// Student 1 details:
// Name: Yash
// Roll No: 0
// Marks: 0

// Student 2 details:
// Name: Yash
// Roll No: 137
// Marks: 95.5
