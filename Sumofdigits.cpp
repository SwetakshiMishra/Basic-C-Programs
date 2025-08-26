#include <iostream>
using namespace std;

// Sum of digits of a number
class Number {
    int num;


public:
    void number_entry() {
        cout << "Enter the number you want to sum the digits of: ";
        cin >> num;
    }

    void digits_accessing() {
        int sum = 0;
        int temp = num;

        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }

        cout << "The sum of digits of " << num << " is " << sum << endl;
    }
};

int main() {
    Number obj;
    obj.number_entry();
    obj.digits_accessing();
    return 0;
}
