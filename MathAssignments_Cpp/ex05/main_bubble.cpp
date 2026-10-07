#include <iostream>
  
int main() {
    const int arraySize = 8; // Size of the array
    int array[arraySize] = {14, 33, 27, 10, 35, 19, 42, 44}; // Array of integers to be sorted
    
    int i, j;
    bool swapped;
    
    // Bubble sort algorithm
    for (i = 0; i < arraySize - 1; i++) {
        swapped = false;
        
        // Inner loop for comparisons and swapping
        for (j = 0; j < arraySize - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                // Swap elements if they are in the wrong order
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swapped = true;
            }
        }
        
        // If no elements were swapped in the inner loop, the array is already sorted
        if (swapped == false) {
            break;
        }
    }
    
    // Output the sorted array
    for (int k = 0; k < arraySize; k++) {
        std::cout << array[k] << ' ';
    }
    
    return 0;
}

