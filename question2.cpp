#include <iostream>
using namespace std;

float area(int radius) {
    float area_of_circle = 3.14 * radius * radius;
    return area_of_circle;
}

int main() {
    int rad;
    cout << "Enter the radius of the circle: ";
    cin >> rad;
    cout << "\nThe area of the circle with radius, " << rad << " is: " << area(rad) << "\n";
}