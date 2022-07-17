/*
Given a random integer array of size n, write a function that rotates the given array by d elements (towards left)
Change in the input array itself. You don't need to return or print elements.
Input format :
Line 1 : Integer n (Array Size)
Line 2 : Array elements (separated by space)
Line 3 : Integer d
Output Format :
Updated array elements in a single line (separated by space)
Constraints :
0 <= N <= 10^7
0 <= d <= N
Sample Input 1:
7
1 2 3 4 5 6 7
2
Sample Output 1:
3 4 5 6 7 1 2
*/
#include <iostream>
using namespace std;
/* //method 1 Function to rotate arr[] of size n by d elements using temp[] array storing d elements space complexity O(d)
void Rotate(int arr[], int d, int n)
{
  // Write your code here
  if (n == 0 || n == 1)
      return;
  d = d % n;
  int temp[d];
  // for (int i = 0; i < d; i++)
  // {
  //     temp[i] = arr[i];//left rotation
  // }
  for (int i = 0; i < d; i++)
  {
      temp[i] = arr[n - d + i];
  }


  // for (int i = d; i < n; i++)
  // {
  //     arr[i - d] = arr[i]; // left rotation
  // }
  for (int i = n - 1; i >= d; i--)
  {
      arr[i] = arr[i - d];
      // cout<<arr[i]<<" ";
      // right rotation
  }

  cout << endl;
  // for (int i = n - d, j = 0; i < n, j < d; i++, j++)
  // {
  //     arr[i] = temp[j]; // left rotation
  // }

  for (int i = 0; i < d; i++)
  {
      arr[i] = temp[i]; // right rotation
  }
}

*/

void reverse(int *input, int start, int end)
{
    int i = start, j = end;
    while (i < j)
    {
        swap(input[i], input[j]);
        i++;
        j--;
    }
}
// method 2 fuction to rotate array by using swaps space complexity O(1) time complexity O(n)
void rotate(int *input, int d, int n)
{
    if (d >= n && n != 0)
    {
        d = d % n;
    }
    else if (n == 0)
    {
        return;
    }
    // right rotation
    // reverse(input, 0, n - 1); // reverse the whole array
    // reverse(input, 0, n - d - 1); // reverse the first part of the array
    // reverse(input, n - d, n - 1); // reverse the second part of the array

    // left rotation
    reverse(input, 0, n - 1);     // reverse the whole array
    reverse(input, 0, d-1); // reverse the first part of the array
    reverse(input, d, n - 1); // reverse the second part of the array

    // could use kn built function to reverse the array
    // //  Reverse all the array elements
    // reverse(Array, Array + N);

    // // Reverse the first k elements
    // reverse(Array, Array + K);

    // // Reverse the elements from K
    // // till the end of the array
    // reverse(Array + K, Array + N);
}

int main()
{
    int n, x;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> x;
    // Rotate(arr, x, n); //method 1
    rotate(arr, x, n); // method 2
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    delete[] arr;
    return 0;
}