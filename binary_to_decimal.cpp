

#include <iostream>
#include <string>
#include <cmath>  // for pow()
using namespace std;

class Converter {
    int binary;
    string num_str;
    int decimal;

public:
    void input_binary() {
        cout << "Enter the binary number: ";
        cin >> binary;

    
        num_str = to_string(binary);  // convert to string for digit access
    }

    void converter_binary() {
        int power = 0;
        decimal = 0;

        // Traverse the binary number from right to left
        for (int i = num_str.length() - 1; i >= 0; i--) {
            if (num_str[i] == '1') {
                decimal += pow(2, power);  // Add 2^power to decimal result
            }
            power++;  // Move to next higher power of 2
        }
        

        cout << "Decimal equivalent: " << decimal << endl;
    }
};

int main() {
    Converter obj;
    obj.input_binary();
    obj.converter_binary();
    return 0;
}
