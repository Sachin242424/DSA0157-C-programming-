#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    cout << "Original numbers: " << num1 << " " << num2 << endl;

    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;

    cout << "Swapped numbers: " << num1 << " " << num2 << endl;

    return 0;
}
