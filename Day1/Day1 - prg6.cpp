#include <iostream>
using namespace std;

int main() {
    char c;
    bool isVowel = false;

    cout << "Enter a character: ";
    cin >> c;

    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        isVowel = true;
    }

    if (isVowel) {
        cout << c << " is a vowel." << endl;
    } else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        cout << c << " is a consonant." << endl;
    } else {
        cout << c << " is not an alphabet character." << endl;
    }

    return 0;
}
