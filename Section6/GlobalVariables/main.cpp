// Section 6
// Global and local variables

#include <iostream>

using namespace std;

int age {18}; // Global variable

int main() {

    int age {16}; // Local variable; shadows the global
    
    cout << age << endl;
    
    return 0;
}