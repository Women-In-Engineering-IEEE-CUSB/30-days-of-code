// C++ program to find the XOR of
// all elements in the array

#include <bits/stdc++.h>
using namespace std;
#define int long long

// Function to find the XOR of
// all elements in the array
int xorOfArray(int arr[], int n)
{
	// Resultant variable
	int xor_arr = 0;

	// Iterating through every element in
	// the array
	for (int i = 0; i < n; i++) {

		// Find XOR with the result
		xor_arr = xor_arr ^ arr[i];
	}

	// Return the XOR
	return xor_arr;
}

// Driver Code
int32_t main()
{
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        

	// Function call
	cout << xorOfArray(arr, n) << endl;
    }
	return 0;
}

// 8
// 41 41
// 41 41
// 42 42
// 42 42
// 43 43
// 43 43
// 44 44
// 44 44