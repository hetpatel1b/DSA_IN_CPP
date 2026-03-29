#include <iostream>
using namespace std;

void printArr(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int partition(int arr[], int si, int ei)
{
    int i = si - 1;
    int pivot = arr[ei];

    for (int j = si; j < ei; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    i++;
    swap(arr[i], arr[ei]);

    return i;
}

void QuickSort(int arr[], int si, int ei)
{

    if (si >= ei)
    {
        return;
    }

    int pivotidx = partition(arr, si, ei);

    QuickSort(arr, si, pivotidx - 1); // left half
    QuickSort(arr, pivotidx + 1, ei); // right half
}


int main()
{

    int arr[6] = {4, 8, 1, 7, 3, 9};
    int n = 6;

    QuickSort(arr, 0, n - 1);
    printArr(arr, n);

    return 0;
}