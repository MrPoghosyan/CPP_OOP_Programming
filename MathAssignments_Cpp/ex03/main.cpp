#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main() {
    int number;
    cin >> number; // Read input number from user
    int i = 0; // Counter variable (currently unused)
    int divisor = 10; // Variable to find the highest place value
    int digit = 0; // Variable to store each digit of the number
    
    // Output the last digit of the number
    int last_digit = number % 10;
    cout << last_digit;
    
    // Find the highest place value (bajanarar)
    while (true) {
        divisor *= 10;
        if (number < divisor) {
            break;
        }
    }
    
    divisor /= 10;
    // Output the middle digits of the number
    int first_digit = number / divisor % 10;
    
    while (divisor > 10) {
        divisor /= 10;
        digit = number / divisor % 10;
        cout << digit;
        if (divisor == 10) {
            break;
        }
    }
    
    // Output the first digit of the number
    cout << first_digit << endl;
    
    return 0;

