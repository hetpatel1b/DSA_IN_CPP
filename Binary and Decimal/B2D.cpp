#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long binary;
    int decimal = 0, i = 0, remainder;

    cout << "Enter binary number: ";
    cin >> binary;

    while (binary != 0) {
        remainder = binary % 10;
        decimal = decimal + remainder * pow(2, i);
        binary = binary / 10;
        i++;
    }

    cout << "Decimal = " << decimal;
    
    return 0;
}
