// Section 8
// Convert EUR to USD

// $1.19 == 1 EUR

#include <iostream>

using namespace std;

int main() {
    
    const double usd_per_euro {1.19};
    
    cout << "Welcome to the EUR to USD converter" << endl;
    cout << "Enter the value in EUR: ";
    
    double euros {0.0};
    double dollars {0.0};
    
    cin >> euros;
    dollars = euros * usd_per_euro;
    
    cout << euros << " euros is equivalent to " << dollars << " dollars." << endl;
    
    cout << endl;
    return 0;
}