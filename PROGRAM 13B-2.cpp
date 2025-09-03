// NAME: YASH SHRIVASTAVA
// PRN: 24070123137
// BATCH: E&TC-B2
// TITLE: FUNCTION OVERLOADING WITH  DIFFERENT DATA TYPES (EXPERIMENT: 13B-2)

// CODE: 

#include <iostream>
using namespace std;

class Calculator {
public:

    int add(int a, int b) {
        return a + b;
    }

   
    double add(double a, double b) {
        return a + b;
    }

    
    double add(double a, double b, double c) {
        return a + b + c;
    }
};

int main() {
    Calculator obj;
    cout << "Addition of integers (5 + 10): " << obj.add(5, 10) << endl;
    cout << "Addition of doubles (3.5 + 4.2): " << obj.add(3.5, 4.2) << endl;
    cout << "Addition of three doubles (2.2 + 3.3 + 4.4): " << obj.add(2.2, 3.3, 4.4) << endl;
    return 0;
}

// OUTPUT:

// Addition of integers (5 + 10): 15
// Addition of doubles (3.5 + 4.2): 7.7
// Addition of three doubles (2.2 + 3.3 + 4.4): 9.9
