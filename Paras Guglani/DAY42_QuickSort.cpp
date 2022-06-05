#include <bits/stdc++.h>
using namespace std;
int partition(int a[], int start, int end)
{
    
    // int mid = (start + end) / 2;
    // Chose pivot
    int pivot = a[start];
    int pivotIndex = start;
    // Count elements smaller than pivot and swap
    for (int i = start + 1; i <= end; i++)
    {
        if (pivot >= a[i])
        {
            pivotIndex++;
        }
    }
    // cout << pivotIndex << "p" << endl;
    swap(a[pivotIndex], a[start]);
    // ensure left half contains elements smaller than pivot // and right half larger
    int i = start, j = end;
    while (i <= pivotIndex && j >= pivotIndex)
    {

        if (a[i] <= pivot)
        {
            i++;
        }
        else if (a[j] > pivot)
        {
            j--;
        }
        else
        {
            swap(a[i++], a[j--]);
        }
    }
    return pivotIndex;
}
void quickSort(int a[], int start, int end)
{
    if (start >= end)
        return;
    int index = partition(a, start, end);
    quickSort(a, start, index - 1);
    quickSort(a, index + 1, end);
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    quickSort(a, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}