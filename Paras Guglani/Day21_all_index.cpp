#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int allIndexes(int input[], int size, int x, int output[])
{

    if (size == 0)
        return 0;

    int ans = allIndexes(input, size - 1, x, output);

    if (input[size - 1] == x)
    {
        output[ans] = size - 1;
        return ans + 1;
    }
    return ans;
}

// input
//  5
//  9 8 10 8 8
//  8

int main()
{
  
    int n;
    cin >> n;

    int *input = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }

    int x;

    cin >> x;

    int *output = new int[n];

    int size = allIndexes(input, n, x, output);
    for (int i = 0; i < size; i++)
    {
        cout << output[i] << " ";
    }

    delete[] input;

    delete[] output;
}
