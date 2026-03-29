#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, target;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> v(n);

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    cout << "Enter target sum: ";
    cin >> target;

    sort(v.begin(), v.end());

    int st = 0,end = n - 1,found = 0;

    while(st < end) {
        int sum = v[st] + v[end];

        if(sum == target) {
            cout << "Pair found: " << v[st] << " , " << v[end];
            found = 1;
            break;
        }
        else if(sum < target) {
            st++;
        }
        else {
            end--;
        }
    }

    if(found==0) {
        cout << "No pair found";
    }

    return 0;
}