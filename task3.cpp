#include <iostream>

using namespace std;

bool isPalindrome(int number) {
    int originalNumber = number;
    int reversedNumber = 0;

    while (number > 0) {
        int digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number /= 10;
    }

    return originalNumber == reversedNumber;
}

void findRectanglesWithArea(int targetArea) {
    cout << "Rectangles with area " << targetArea << ":\n";
    for (int length = 1; length <= targetArea; ++length) {
        if (targetArea % length == 0) {
            int width = targetArea / length;
            cout << "Rectangle: " << length << " x " << width << "\n";
        }
    }
}

void findPythagoreanTriplets() {
    cout << "x^2 + y^2 = k^2 for x, y, k from 1 to 30:\n";
    for (int x = 1; x <= 30; ++x) {
        for (int y = x + 1; y <= 30; ++y) {
            int kSquare = x * x + y * y;
            int k = static_cast<int>(sqrt(kSquare));
            if (k <= 30 && k * k == kSquare) {
                cout << "x = " << x << ", y = " << y << ", k = " << k << "\n";
            }
        }
    }
}

int main() {
    int inputNumber;

    cout << "Enter the number: ";
    cin >> inputNumber;

    if (isPalindrome(inputNumber)) {
        cout << inputNumber << " - is a palindrome\n";
    } else {
        cout << inputNumber << " - is not a palindrome";
    }

    int targetArea;

    cout << "Enter the area of the rectangle: ";
    cin >> targetArea;

    if (targetArea > 0) {
        findRectanglesWithArea(targetArea);
    } else {
        cout << "Enter a positive number to search for rectangles.\n";
    }
    findPythagoreanTriplets();

    return 0;
}