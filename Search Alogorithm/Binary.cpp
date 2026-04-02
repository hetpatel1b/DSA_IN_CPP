#include <iostream>
using namespace std;

// Binary search works on sorted array
int binsearch(int arr[], int n, int key)
{
    int st = 0, end = n - 1;

    while (st <= end)
    {
        // Check middle element
        int mid = (st + end) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {2, 6, 9, 15, 20, 21, 25, 30};
    int n = sizeof(arr) / sizeof(int);

    cout << binsearch(arr, n, 25);

    return 0;
}

// TC: O(log n)
// SC: O(1)
