#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    double number;
    
  
    cout << "Enter a floating-point number: ";
    cin >> number;
    
  
    int rounded_floor = static_cast<int>(floor(number + 0.5));
    int rounded_ceil = static_cast<int>(ceil(number - 0.5));
    
  
    cout << "Original number: " << number << endl;
    cout << "Rounded using floor function: " << rounded_floor << endl;
    cout << "Rounded using ceil function: " << rounded_ceil << endl;
    
    return 0;
}
