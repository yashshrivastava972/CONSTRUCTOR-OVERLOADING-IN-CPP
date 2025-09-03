// NAME: YASH SHRIVASTAVA
// PRN: 24070123137
// BATCH: E&TC-B2
// TITLE: CONSTRUCTOR OVERLOADING WITH PARAMETERS (EXPERIMENT: 13A-1)

// CODE: 

#include <iostream>
using namespace std;

class Add {
public:

    Add(int a, int b) {
        cout << "Sum of two integers: " << (a + b) << endl;
    }

    Add(float a, float b) {
        cout << "Sum of two floats: " << (a + b) << endl;
    }

    Add(int a, int b, int c) {
        cout << "Sum of three integers: " << (a + b + c) << endl;
    }
};

int main() {
   
    Add object1(5, 6);          
    Add object2(5.5f, 6.5f);   
    Add object3(1, 2, 3);       

    return 0;
}

// OUTPUT:

// Sum of two integers: 11
// Sum of two floats: 12
// Sum of three integers: 6
