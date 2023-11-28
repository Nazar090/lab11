#include <iostream>

using namespace std;

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

int main () {
    int targetArea;

    cout << "Enter the area of the rectangle: ";
    cin >> targetArea;

    if (targetArea > 0) {
        cout << "Okay\n";
    } else {
        cout << "Enter a positive number to search for rectangles.\n";
    }
    findPythagoreanTriplets();
    return 0;
}
