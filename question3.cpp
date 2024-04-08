#include <iostream>
using namespace std;

void print_odd(int start, int end) {
    for(int i = start; i <= end; i++) {
        if(i % 2 != 0) {
            cout << i << "\n";
        }
        else {
            continue;
        }
    }
}

int main() {
    int first;
    cout << "Enter the first number: ";
    cin >> first;

    int second;
    cout << "Enter the second numner: ";
    cin >> second;

    print_odd(first, second);
}