// Section 12
// References

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    
    int num {100};
    int &ref {num};
    
    cout << num << endl;
    cout << ref << endl;
    
    num = 200;
    cout << "\n---------------------------------------" << endl;
    cout << num << endl;
    cout << ref << endl;
    
    ref = 300;
    cout << "\n---------------------------------------" << endl;
    cout << num << endl;
    cout << ref << endl;
    
    cout << "\n---------------------------------------" << endl;
    vector<string> stooges {"Larry", "Moe", "Curly"};
    
    for (auto str: stooges)
        str = "Funny"; // str is a COPY of each vector element
        
    for (auto str: stooges)
        cout << str << endl; // no change
        
    cout << "\n----------------------------------------" << endl;
    for (auto &str: stooges) // str is a reference to each vector element
        str = "Funny"; // changing the value at the reference/address
        
    for (auto const &str: stooges) // const; can't change the elelemts
        cout << str << endl; // changed
        
    int *values;
    values = {&ref};
    
    cout << "\n-----------------------------------------" << endl;
    cout << "The dereferenced pointer of values is: " << *values << endl;
    cout << "The pointer of values is: " << values << endl;
    cout << "The reference of values is: " << ref << endl;
    cout << "The address of the reference of values is: " << &ref << endl;
    
    cout << endl;
    return 0;
}