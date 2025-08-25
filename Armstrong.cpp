#include <iostream>
#include <cmath>  // for pow()
using namespace std;

class Armstrong {
    int num1, ran1, ran2, choice, count;


public:
    void input_num() {
        cout << "Do you want to check a number for Armstrong (1) or find all Armstrong numbers in a range (2)? ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter the number to check for Armstrong: ";
            cin >> num1;
        } else {
            cout << "Enter the start of the range (included): ";
            cin >> ran1;
            cout << "Enter the end of the range (included): ";
            cin >> ran2;
        }
    }

    void armstrong_function() {
        if (choice == 1) {
            int c = 0;
            string word = to_string(num1);
            int len = word.length();
            for (int i = 0; i < len; i++) {
                c += pow(word[i] - '0', len);  // Convert char to int
            }
            if (c == num1) {
                cout << num1 << " is an Armstrong number." << endl;
            } else {
                cout << num1 << " is NOT an Armstrong number." << endl;
            }
        } else {
            count = 0;
            cout << "Armstrong numbers in the range: ";
            for (int i = ran1; i <= ran2; i++) {
                int c = 0;
                string word = to_string(i);
                int len = word.length();
                for (int j = 0; j < len; j++) {
                    c += pow(word[j] - '0', len);
                }
                if (c == i) {
                    cout << i << " ";
                    count++;
                }
            }
            cout << "\nTotal Armstrong numbers found: " << count << endl;
        }
    }
};

int main() {
    Armstrong obj;
    obj.input_num();
    obj.armstrong_function();
    return 0;
}


