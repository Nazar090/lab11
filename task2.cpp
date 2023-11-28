#include <iostream>

using namespace std;

bool graf(int number) {
    int originalNumber = number;
    int reversedNumber = 0;

    while (number > 0) {
        int digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number /= 10;
    }

    return originalNumber == reversedNumber;
}

int main () {
    int inputNumber;

    cout << "Enter the number: ";
    cin >> inputNumber;

    if (graf(inputNumber)) {
        cout << inputNumber << " - is a palindrome\n";
    } else {
        cout << inputNumber << " - is not a palindrome";
    }

    return 0;
}
