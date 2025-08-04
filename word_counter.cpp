#include <iostream>
using namespace std;

class word_count {
    string sentence;
    int count = 0;

public:
    void word_input() {
        cout << "Enter the sentence: ";
        getline(cin, sentence);
    }

    void word_counting() {
        // Check if string is not empty
        if (!sentence.empty()) {
            count = 1; // At least one word is there
            for (int i = 0; i < sentence.length(); i++) {
                if (sentence[i] == ' ') {
                    count++;
                }
            }
        }

        cout << "The number of words in \"" << sentence << "\" is " << count << endl;
    }
};

int main() {
    word_count words;
    words.word_input();
    words.word_counting();
    return 0;
}
