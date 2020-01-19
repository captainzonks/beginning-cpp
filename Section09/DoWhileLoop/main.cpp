// Section 9
// Do-While Loop
// Simple Menu Example

#include <iostream>

using namespace std;

int main() {
    
    char selection {};
    
    do {
        cout << "\n-------------------------" << endl;
        cout << "1. Do something" << endl;
        cout << "2. Do something else" << endl;
        cout << "3. Do another thing." << endl;
        cout << "Q to quit" << endl;
        cout << "\nEnter your selection: ";
        cin >> selection;

        // Switch version
        switch (selection){
            case '1':
                cout << "\n1. You did something." << endl;
                break;
            case '2':
                cout << "\n2. You did something else." << endl;
                break;
            case '3':
                cout << "\n3. You did another thing." << endl;
                break;
            case 'q':
            case 'Q':
                cout << "\nGoodbye..." << endl;
                break;
            default:
                cout << "\nThat's not a choice, dumbass." << endl;
        }
        
        // Else-If Ladder version
//        if (selection == '1')
//            cout << "\n1. You did something." << endl;
//        else if (selection == '2')
//            cout << "\n2. You did something else." << endl;
//        else if (selection == '3')
//            cout << "\n3. You did another thing." << endl;
//        else if (selection == 'Q' || selection == 'q')
//            cout << "\nGoodbye..." << endl;
//        else
//            cout << "\nThat's not a choice, dumbass." << endl;
        
    } while (selection != 'q' && selection != 'Q');
    
    cout << endl;
    return 0;
}