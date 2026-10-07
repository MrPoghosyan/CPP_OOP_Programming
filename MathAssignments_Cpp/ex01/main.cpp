#include <iostream>

int main() {
    int n;
    
    // Read input number 'n' from the user
    std::cin >> n;
    
    int divisor = 1; // Start with divisor equal to 1
    bool found = false; // Variable to track if digit '3' is found
    
    // Continue the loop as long as the current divisor is less than or equal to n
    while (divisor <= n) {
        // Extract the current digit of n using integer division and modulus
        int digit = (n / divisor) % 10;
      
        // Check if the current digit is equal to 3
        if (digit == 3) {
            found = true; // Set found to true if digit '3' is found
            break;
        }
        
        divisor *= 10; // Multiply divisor by 10 to move to the next digit of n
    }
    
    // Print "Yes" if '3' was found, otherwise print "No"
    if (found) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
    
    return 0;
}

