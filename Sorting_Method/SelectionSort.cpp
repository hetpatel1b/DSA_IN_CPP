#include <iostream>
using namespace std;

// Selection sort selects the smallest element in each pass
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

int main()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    selectionSort(arr, n);

    cout << "Sorted array:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}

// TC O(N^2)
// SC O(1)
