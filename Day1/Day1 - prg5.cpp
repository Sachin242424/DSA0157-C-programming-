#include <iostream>
#include <cmath>  
using namespace std;

int main() {
    float num1, num2;
    
    cout << "Enter two floating-point numbers: ";
    cin >> num1 >> num2;
    
    float addition = num1 + num2;
    float subtraction = num1 - num2;
    float multiplication = num1 * num2;
    float division;
    float modulo;


    if (num2 != 0) {
        division = num1 / num2;
        modulo = fmod(num1, num2);
    } else {
        cout << "Division by zero is not allowed." << endl;
    }
    
    cout << "Addition: " << addition << endl;
    cout << "Subtraction: " << subtraction << endl;
    cout << "Multiplication: " << multiplication << endl;
    if (num2 != 0) {
        cout << "Division: " << division << endl;
        cout << "Modulo: " << modulo << endl;
    }
    
    return 0;
}
