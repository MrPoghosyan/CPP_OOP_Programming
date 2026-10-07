#include <iostream>

int main() {
    double r; // Radius of the circle
    double x, y; // Coordinates of the point
    
    std::cout << "Enter the radius of the circle: ";
    std::cin >> r;
    
    std::cout << "Enter the coordinates of the point (x y): ";
    std::cin >> x >> y;
    
    double distance_squared = x*x + y*y; // Calculate squared distance from (0,0) to (x,y)
    double r_squared = r*r; // Calculate squared radius
    
    if (distance_squared == r_squared) {
        std::cout << "YES (On the circle)" << std::endl;
    } else if (distance_squared < r_squared) {
        std::cout << "YES (Inside the circle)" << std::endl;
    } else {
        std::cout << "YES (Outside the circle)" << std::endl;
    }
    
    return 0;
}
