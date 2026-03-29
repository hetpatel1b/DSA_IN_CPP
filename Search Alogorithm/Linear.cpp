#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }

    return -1;
}

int main()
{

    int arr[] = {12, 54, 23, 61, 11, 2, 9, 22};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << linearSearch(arr, n, 61) << endl;
}