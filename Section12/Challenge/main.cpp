// Section 12
// Challenge

/*
 * Write a C++ function named apply_all that expects two arrays of integers and their sizes and
 * dynamically allocates a new array of integers whose size is the product of the 2 array sizes
 * 
 * The function should loop through the second array and multiply each element across each element of array 1
 * and store the product in the newly created array.
 * 
 * The function should return a pointer to the newly allocated array.
 * 
 * You can also write a print function that expects a pointer to an array of integers and its size
 * and display the elements in the array.
*/

#include <iostream>

using namespace std;

void print(const int *const array, size_t size) {
    cout << "[ ";
    for (size_t i {0}; i < size; ++i)
        cout << array[i] << " ";
    cout << "]";
    cout << endl;
}

int *apply_all(int *array1, const size_t size1, int *array2, const size_t size2) {
    int *results {nullptr};
    results = new int[(size1 * size2)];
    int count {0};
    
    for (size_t i {0}; i < size2; ++i) {
        for (size_t j {0}; j < size1; ++j) {
            results[count] = array2[i] * array1[j];
            count++;
        }
    }
    
    return results;
}

int main() {
    const size_t array1_size {5};
    const size_t array2_size {3};
    
    int array1[] {1,2,3,4,5};
    int array2[] {10,20,30};
    
    cout << "Array 1: ";
    print(array1, array1_size);
    
    cout << "Array 2: ";
    print(array2, array2_size);
    
    int *results = apply_all(array1, array1_size, array2, array2_size);
    constexpr size_t results_size {array1_size * array2_size};
    
    cout << "Result: ";
    print(results, results_size);
    
    delete [] results;
    cout << endl;    
    return 0;
}