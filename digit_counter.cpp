#include <iostream>
using namespace std;

class digit_counter {
    int number;
    int c;

public:
    void digit_input() {
        cout << "Enter the number: ";
        cin >> number;
    }

    void digit_count() {
        string num_str = to_string(number);
        c = num_str.length();

        // If the number is negative, '-' is counted as a character — fix that:
        if (number < 0) {
            c -= 1;
        }

        cout << "The number of digits in " << number << " is " << c << endl;
    }
};

int main() {
    digit_counter digit;
    digit.digit_input();
    digit.digit_count();
    return 0;
}