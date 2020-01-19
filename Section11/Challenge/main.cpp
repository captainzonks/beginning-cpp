// Section 11
// Challenge

#include <iostream>
#include <vector>

using namespace std;

// Function Prototypes
void display_menu();
char get_selection();
void empty_error();
void print_list(const vector<int> &data);
void add_to_list(vector<int> &data);
void calculate_mean(const vector<int> &data);
void smallest_number(const vector<int> &data);
void largest_number(const vector<int> &data);
void find_number(const vector<int> &data);
void clear_list(vector<int> &data);

// Functions
void display_menu() {
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
}
char get_selection() {
    char selection{};
    cin >> selection;
    return toupper(selection);
}
void empty_error() {
    cout << "\nSorry, the list of numbers is empty." << endl;
}
void print_list(const vector<int> &data) {
    if (data.size() == 0) {
        empty_error();
    }
    else {
        cout << "\n[";
        for (size_t i {}; i < data.size(); ++i) {
            cout << " " << data.at(i);
        }
        cout << " ]" << endl;
    }
}
void add_to_list(vector<int> &data) {
    int input {};
    cout << "\nPlease enter an integer: ";
    cin >> input;
    data.push_back(input);
    cout << "\n" << input << " was added to the list." << endl;
}
void calculate_mean(const vector<int> &data) {
    if (data.size() == 0) {
        empty_error();
    }
    else {
        cout << "\nThe mean of the data set is: ";
        double mean {};
        int total {};
        for (size_t i {0}; i < data.size(); ++i) {
            total += data.at(i);
        }
        mean = static_cast<double> (total) / data.size();
        cout << mean << endl;
    }

}
void smallest_number(const vector<int> &data) {
    if (data.size() == 0) {
        empty_error();
    }
    else {
        cout << "\nThe smallest numbers is ";
        int comparison {data.at(0)};
        for (size_t i {0}; i < data.size(); ++i) {
            if (data.at(i) < comparison)
                comparison = data.at(i);
            else
                continue;
        }
        cout << comparison << endl;
    }
}
void largest_number(const vector<int> &data) {
    if (data.size() == 0) {
        empty_error();
    }
    else {
        cout << "\nThe largest number is ";
        int comparison {data.at(0)};
        for (size_t i {}; i < data.size(); ++i) {
            if (data.at(i) > comparison)
                comparison = data.at(i);
            else
                continue;
        }
        cout << comparison << endl;
    }
}
void find_number(const vector<int> &data) {
    if (data.size() == 0) {
        empty_error();
    }
    else {
        int number_to_find {};
        cout << "\nPlease enter the number you wish to find: ";
        cin >> number_to_find;
        int count {};
        for (size_t i{}; i < data.size(); ++i) {
            if (number_to_find == data.at(i))
                count++;
        }
        if (count == 0)
            cout << "\nYour number was not found." << endl;
        else
            cout << "\nThe number " << number_to_find << " occurs " << count << " times" << endl;
    }
}
void clear_list(vector<int> &data) {
    cout << "Are you sure you want to clear all numbers in the list? (Y/N) ";
    char selection {};
    selection = get_selection();
    if (selection == 'Y') {
        data.clear();
        cout << "The list was cleared." << endl;
    }
    else if (selection == 'N') {
        cout << "The list was not cleared." << endl;
    }
    else {
        cout << "You entry was not recognized." << endl;
    }
}

// Main
int main() {
    vector<int> data {};
    char selection {};
    
    do {
        display_menu();
        selection = get_selection();
        
        switch (selection) {
            case 'P': {
                print_list(data);
                break;
            }
            case 'A': {
                add_to_list(data);
                break;
            }
            case 'M': {
                calculate_mean(data);
                break;
            }
            case 'S': {
                smallest_number(data);
                break;
            }
            case 'L': {
                largest_number(data);
                break;
            }
            case 'F': {
                find_number(data);
                break;
            }
            case 'C': {
                clear_list(data);
                break;
            }
            case 'Q':
                break;
            default:
                cout << "\nUnknown selection, please try again" << endl;
                continue;
        }
    } while (selection != 'Q');
    
    cout << "\nGoodbye..." << endl;
    
    cout << endl;
    return 0;
}