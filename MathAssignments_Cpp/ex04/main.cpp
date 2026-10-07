#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
    cout << "Enter the radius of the circle: ";
    double radius{0.0}; // Variable to store the radius of the circle
    cin >> radius; // Read radius from user input
    
    const double pi = 3.14159265358979323846; // Constant for pi
    
    // Calculate circumference and area of the circle
    auto circumference = 2 * pi * radius;
    auto area = pi * radius * radius;
    
    // Output the calculated values
    cout << "Length = " << circumference << endl
         << "Area = " << area << endl;
    
    return 0; // Return 0 to indicate successful program execution
}
