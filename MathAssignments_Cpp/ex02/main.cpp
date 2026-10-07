#include <iostream>

int main() {
    int number;
    std::cin >> number; // Read input number from user
    
    int digit; // Variable to store each digit of the number during iteration
    int min_digit = 10; // Initialize min_digit to a value greater than any possible digit (0-9)
    
    while (number) {
        digit = number % 10; // Extract the last digit of the number
        
        if (min_digit > digit) {
            min_digit = digit; // Update min_digit if current digit is smaller
        } else {
            std::cout << "No" << std::endl; // Output "No" if digits are not strictly increasing
            break;
        }
        
        number /= 10; // Remove the last digit from the number
    } 
    
    if (number == 0) {
        std::cout << "Yes" << std::endl; // Output "Yes" if all digits are strictly increasing
    }
    
    return 0; 
}
