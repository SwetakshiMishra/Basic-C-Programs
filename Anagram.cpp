#include <iostream>
#include <algorithm>
using namespace std;

class Anagram {
    string word1;
    string word2;

public:
    void str_input() {
        cout << "Enter the first word: ";
        cin >> word1;
        cout << "Enter the second word: ";
        cin >> word2;
    }

    void str_anagram() {
        if (word1.length() != word2.length()) {
            cout << "Not an anagram.\n";
            return;
        }

        // Copy and sort both words
        string sorted1 = word1;
        string sorted2 = word2;

        // Convert both to lowercase before sorting
        transform(sorted1.begin(), sorted1.end(), sorted1.begin(), ::tolower);
        transform(sorted2.begin(), sorted2.end(), sorted2.begin(), ::tolower);

        sort(sorted1.begin(), sorted1.end());
        sort(sorted2.begin(), sorted2.end());

        if (sorted1 == sorted2) {
            cout << "Words are anagrams.\n";
        } else {
            cout << "Not an anagram.\n";
        }
    }
};

int main() {
    Anagram checker;
    checker.str_input();
    checker.str_anagram();
    return 0;
}
