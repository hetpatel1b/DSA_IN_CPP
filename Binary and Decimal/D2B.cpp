#include <iostream>
using namespace std;

// Convert decimal number to binary
void decToBin(int n) {
    int pow = 1;
    int binNum = 0;

    while(n > 0) {
        int rem = n % 2;
        binNum = binNum + rem * pow;
        n = n / 2;
        pow = pow * 10;
    }

    cout << "Binary = " << binNum << endl;
}

int main() {
    
    decToBin(13);
    return 0;
}

// TC: O(number of binary digits)
// SC: O(1)
