// NAME: YASH SHRIVASTAVA
// PRN: 24070123137
// BATCH: E&TC-B2
// TITLE: FUNCTION OVERLOADING WITH DIFFERENT NUMBER OF PARAMETERS (EXPERIMENT: 13B-1)

// CODE: 

#include <iostream>
using namespace std;

class Math {
public:
  
    int square(int x) {
        return x * x;
    }

    int multiply(int x, int y) {
        return x * y;
    }

    int multiply(int x, int y, int z) {
        return x * y * z;
    }
};

int main() {
    Math obj;
    cout << "Square of 5: " << obj.square(5) << endl;
    cout << "Multiplication of 3 and 4: " << obj.multiply(3, 4) << endl;
    cout << "Multiplication of 2, 3 and 4: " << obj.multiply(2, 3, 4) << endl;
    return 0;
}

// OUTPUT:

// Square of 5: 25
// Multiplication of 3 and 4: 12
// Multiplication of 2, 3 and 4: 24
