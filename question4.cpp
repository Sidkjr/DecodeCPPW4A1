#include <iostream>
using namespace std;

void square_of_digits(int num) {
    int count = 0;
    while(num > 0) {
        num /= 10;
        count++;
    }
    cout << count*count << "\n";
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    square_of_digits(n);    
}