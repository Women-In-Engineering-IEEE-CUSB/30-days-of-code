#include <bits/stdc++.h>
using namespace std;
void merge(int a[], int start, int end)
{
    int mid = (start + end) / 2;
    int b[end - start+1];
    int i = start;
    int j = mid + 1;
    int k = 0;
    while (i <= mid && j <= end)
    {
        if (a[i] < a[j])
        {
            b[k++] = a[i++];
        }
        else 
        {
            b[k++] = a[j++];
        }
    }
    while (i <= mid)
    {
        b[k++] = a[i++];
    }
    while (j <= end)
    {
        b[k++] = a[j++];
    }

    for (int i = start,j=0; i <= end; i++,j++)
    {
        a[i] = b[j];
    }
}

void mergeSort(int a[], int start, int end)
{
    if (start >= end)
        return;
    int mid = (start + end) / 2;

    mergeSort(a, start, mid);
    mergeSort(a, mid + 1, end );
    merge(a, start, end );
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
    mergeSort(a, 0, n-1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}