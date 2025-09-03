// NAME: YASH SHRIVASTAVA
// PRN: 24070123137
// BATCH: E&TC-B2
// TITLE: OVERLOAD THE ++ OPERATOR FOR A COUNTER CLASS (EXPERIMENT: 13C-2)

// CODE: 

#include <iostream>
using namespace std;

class Counter {
private:
    int value;

public:
    Counter(int v = 0) { 
    
        value = v;
    }

  
    Counter operator++() {
        ++value;
        return *this;
    }

    void show() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Counter c1(5);   

    cout << "Before increment: ";
    c1.show();

    ++c1;  
    
    cout << "After increment: ";
    c1.show();

    return 0;
}
// OUTPUT:

// Before increment: Value: 5
// After increment: Value: 6
