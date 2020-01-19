#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string input;
    
    cout << "Please enter a string: ";
    getline(cin, input);
    
    for (size_t i {1}; i <= input.length(); ++i){               // outer loop counts up the length of the string (offset plus 1)
        string whitespace (input.length() - i, ' ');            // whitespace will be created with the total length minus current index
        cout << whitespace;                                          // print whitespace
        string partial {input.substr(0, i)};                        // setup a partial of the string from beginning to index position (thus the offset plus 1)
        cout << partial;                                                 // print partial
        for (size_t j {partial.length() - 1}; j > 0; --j){        // inner loop counts down the length of the partial (offset minus 1, to avoid out of range error)
            cout << partial.at(j - 1);                                 // print partial character at position reverse-index minus 1 (to account for index 0)
        }
        cout << endl;                                                     // endline
    }
    
    cout << endl;
    return 0;
}