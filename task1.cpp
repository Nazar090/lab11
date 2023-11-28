#include <iostream>

using namespace std;

string convertToWord(int digit) {
    switch (digit) {
        case 1:
            return "English: one\nУкраїнська: один";
        case 2:
            return "English: two\nУкраїнська: два";
        case 3:
            return "English: tree\nУкраїнська: три";
        case 4:
            return "English: four\nУкраїнська: чотири";
        case 5:
            return "English: five\nУкраїнська: п'ять";
        case 0:
            return "English: six\nУкраїнська: нуль";
    }
    return "You entered something wrong.";
}

int main () {
    cout << "Enter the digit from 0 to 5: ";
    int digit;
    cin >> digit;
    cout << convertToWord(digit) << endl;
    return 0;
}
