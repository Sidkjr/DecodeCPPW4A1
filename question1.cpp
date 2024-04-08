#include <iostream>
using namespace std;

void squares(int n) {
    int start = 1;
    while(start <= n) {
        cout << start*start << "\n";
        start += 1;
    }
}

int main() {
    int input;
    cout << "Enter the value of n: ";
    cin >> input;
    squares(input);
}