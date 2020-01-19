// Section 9
// Nested Loops - Histogram

#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    int num_items {};
    
    cout << "How many data items do you have? ";
    cin >> num_items;
    
    vector<int> data {};
    
    for (int i {1}; i <= num_items; ++i) {
        int data_item {};
        cout << "Enter data item " << i << ": ";
        cin >> data_item;
        data.push_back(data_item);
    }
    
    cout << "\nDisplaying Histogram" << endl;
    for (auto val: data) {
        for (int i {1}; i <= val; ++i) {
            if (i % 5 == 0)
                cout << "*";
            else
                cout << "-";
        }
        cout << endl;
    }
    
    int result {};

    for (size_t i = 0; i < data.size(); ++i)
        for (size_t j = i + 1; j < data.size(); ++j)
            result += data.at(i) * data.at(j);
    
    cout << "The sum of products of all pairs is: " result << endl;
    
    cout << endl;
    return 0;
}