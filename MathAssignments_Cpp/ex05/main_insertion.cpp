#include <iostream>
  
int main() {
    const int arraySize = 8; // Size of the array
    int array[arraySize] = {14, 33, 27, 10, 35, 19, 42, 44}; // Array of integers to be sorted
    
    int key, j;
    
    // Insertion sort algorithm
    for (int i = 1; i < arraySize; i++) {
        key = array[i];
        j = i - 1;
        
        // Shift elements of array[0..i-1], that are greater than key, to one position ahead of their current position
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
    }
    
    // Output the sorted array
    for (int k = 0; k < arraySize; k++) {
        std::cout << array[k] << ' ';
    }
    
    return 0;
}
