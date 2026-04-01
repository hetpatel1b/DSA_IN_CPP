#include <iostream>
#include <vector>
using namespace std;

// Merge two sorted halves
void Merge(int arr[], int si, int mid, int ei)
{

    vector<int> temp;
    int i = si;
    int j = mid + 1;

    while (i <= mid && j <= ei)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i++]);
        }
        else
        {
            temp.push_back(arr[j++]);
        }
    }

    while (i <= mid)
    {
        temp.push_back(arr[i++]);
    }

    while (j <= ei)
    {
        temp.push_back(arr[j++]);
    }

    for (int idx = si, x = 0; idx <= ei; idx++)
    {
        arr[idx] = temp[x++];
    }
}

void MergeSort(int arr[], int si, int ei)
{
    if (si >= ei)
    {
        return;
    }

    // Divide array into two halves
    int mid = (si + ei) / 2;

    MergeSort(arr, si, mid);     // left half
    MergeSort(arr, mid + 1, ei); // right half

    Merge(arr, si, mid, ei);
}

void printArr(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[6] = {4, 8, 1, 7, 3, 9};
    int n = 6;

    MergeSort(arr, 0, n - 1);
    printArr(arr, n);

    return 0;
}

// TC O(N*log(N))
// SC O(1)
