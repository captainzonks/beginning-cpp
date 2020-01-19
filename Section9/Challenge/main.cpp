// Section 9
// Challenge
/*
 * This challenge is about using a collection (list) of integers and allowing the user 
 * to select options from a menu to perform operations on the list.
 * 
 * You program should display menu options to the user as follows:
 * 
 * P - Print numbers
 * A - Add a number
 * M - Display mean of the numbers
 * S - Display the smallest number
 * L - Display the largest number
 * Q - Quit
 * 
 * Enter your choice:
 * 
 * The program should only accept valid choices from the user, both upper and lowercase selections should be allowed.
 * If an illegal choice is made, you should display, "Unknown selection, please try again" and the menu options should
 * be displayed again.
 * 
 * If the user enters 'P' or 'p', you should display all of the elements (ints) in the list.
 * If the list is empty you should display "[] - the list is empty"
 * If the list is not empty then all the list elements should be displayed inside square brackets separated by a space.
 * For example, [ 1 2 3 4 5 ]
 * 
 * If the user enters 'A' or 'a' then you should prompt the user for an integer to add to the list
 * which you will add to the list and then display it was added, For example, if the user enters 5
 * You should display, "5 added"
 * Duplicate list entries are OK
 * 
 * If the user enters 'M' or 'm' you should calculate the mean or average of the elements in the list and display it
 * If the list is empty you should display, "Unable to calculate the mean - no data"
 * 
 * If the user enters 'S' or 's' you should display the smallest element in the list.
 * For example, if the list contains [ 2 4 5 1 ] you should display "The smallest number is 1"
 * If the list is empty you should display, "Unable to determine the smallest number - list is empty"
 * 
 * If the user enters 'L' or 'l' you should display the largest element in the list.
 * For example, if the list contains [ 2 4 5 1 ] you should display "The largest number is 5"
 * If the list is empty you should display, "Unable to determine the largest number - list is empty"
 * 
 * If the user enters 'Q' or 'q' then you should display "Goodbye" and the program should terminate
 * 
 * Hint: Use a vector!
 * 
 * Additional functionality if you wish to extend this program:
 * 
 * - search for a number in the list and if found display the number of times it occurs in the list
 * - clearing out the list (make it empty again) (Hint: the vector class has a .clear() method)
 * - don't allow duplicate entries
 * - come up with your own ideas!
 * 
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    vector<int> data {};
    
    char selection {};
    
    do {
        cout << "\n=====THE MENU=====" << endl;
        cout << "P -- Print numbers" << endl;
        cout << "A -- Add a number" << endl;
        cout << "M -- Display the mean of numbers" << endl;
        cout << "S -- Display the smallest of numbers" << endl;
        cout << "L -- Display the largest of numbers" << endl;
        cout << "F -- Find numbers" << endl;
        cout << "C -- Clear numbers" << endl;
        cout << "Q -- Quit" << endl;
        cout << "==================" << endl;
        cout << "\nPlease enter your selection: ";
        cin >> selection;
        
        switch (selection) {
            case 'p':
            case 'P': {
                if (data.size() == 0) {
                    cout << "[] - the list is empty" << endl;
                    break;
                }
                else {
                    cout << "\n[";
                    for (size_t i {}; i < data.size(); ++i) {
                        cout << " " << data.at(i);
                    }
                    cout << " ]" << endl;
                }
                break;
            }
            case 'a':
            case 'A': {
                int input {};
                cout << "\nPlease enter an integer: ";
                cin >> input;
                data.push_back(input);
                break;
            }
            case 'm':
            case 'M': {
                if (data.size() == 0) {
                    cout << "\nUnable to calculate the mean -- list is empty" << endl;
                    break;
                }
                else {
                    double mean {};
                    int total {};
                    for (size_t i {0}; i < data.size(); ++i) {
                        total += data.at(i);
                    }
                    mean = static_cast<double> (total) / data.size();
                    cout << "\nThe mean of the data set is: " << mean << endl;
                    break;
                }
            }
            case 's':
            case 'S': {
                if (data.size() == 0) {
                    cout << "\nUnable to determine smallest number -- list is empty" << endl;
                    break;
                }
                else {
                    int comparison {data.at(0)};
                    for (size_t i {0}; i < data.size(); ++i) {
                        if (data.at(i) < comparison)
                            comparison = data.at(i);
                        else
                            continue;
                    }
                    cout << "\nThe smallest numbers is " << comparison << endl;
                    break;
                }
            }
            case 'l':
            case 'L': {
                if (data.size() == 0) {
                    cout << "\nUnable to determine largest number -- list is empty" << endl;
                    break;
                }
                else {
                    int comparison {data.at(0)};
                    for (size_t i {}; i < data.size(); ++i) {
                        if (data.at(i) > comparison)
                            comparison = data.at(i);
                        else
                            continue;
                    }
                    cout << "\nThe largest numbers is " << comparison << endl;
                    break;
                }
            }
            case 'f':
            case 'F': {
                if (data.size() == 0) {
                    cout << "\nUnable to find a number -- list is empty" << endl;
                    break;
                }
                else {
                    int number_to_find {};
                    cout << "Please enter the number you wish to find: ";
                    cin >> number_to_find;
                    int count {};
                    for (size_t i{}; i < data.size(); ++i) {
                        if (number_to_find == data.at(i))
                            count++;
                    }
                    cout << "\nThe number " << number_to_find << " occurs " << count << " times" << endl;
                    break;
                }
            }
            case 'c':
            case 'C': {
                data.clear();
                cout << "\nThe numbers have been cleared" << endl;
                break;
            }
            default:
                cout << "\nUnknown selection, please try again" << endl;
                break;
        }
        
    } while (selection != 'Q' && selection != 'q');
    
    cout << "\nGoodbye..." << endl;
    
    cout << endl;
    return 0;
}