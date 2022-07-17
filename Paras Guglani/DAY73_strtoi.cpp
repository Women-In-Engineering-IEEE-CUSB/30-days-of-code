#include <bits/stdc++.h>
using namespace std;

// function to convert array of strings to array of integers

int strtoi(string arr[], int n)
{
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = stoi(arr[i]);
    }

    int max = a[0];
    int secondMax = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            secondMax = max;
            max = a[i];
        }
        else if (a[i] > secondMax)
        {
            secondMax = a[i];
        }
    }

    // if secondMax is not present in the array return -1
    if (secondMax == max || n < 2)
    {
        return -1;
    }
    else
    {
        return secondMax;
    }
}
string findSecondmax(string arr[], int n)
{
    int ans = strtoi(arr, n);
    if(ans==-1)
    {
        return "None";
    }
    else
    {
        return to_string(ans);
    }
}

int main()
{
    string arr[] = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10"};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << findSecondmax(arr, n);

    return 0;
}

// C++ program to convert a string to
// integer array
#include <bits/stdc++.h>
using namespace std;

// Function to convert a string to
// integer array
void convertStrtoArr(string str)
{
    // get length of string str
    int str_length = str.length();

    // create an array with size as string
    // length and initialize with 0
    int arr[str_length] = {0};

    int j = 0, i, sum = 0;

    // Traverse the string
    for (i = 0; str[i] != '\0'; i++)
    {

        // if str[i] is ', ' then split
        if (str[i] == ',')
            continue;
        if (str[i] == ' ')
        {
            // Increment j to point to next
            // array location
            j++;
        }
        else
        {

            // subtract str[i] by 48 to convert it to int
            // Generate number by multiplying 10 and adding
            // (int)(str[i])
            arr[j] = arr[j] * 10 + (str[i] - 48);
        }
    }

    cout << "arr[] = ";
    for (i = 0; i <= j; i++)
    {
        cout << arr[i] << " ";
        sum += arr[i]; // sum of array
    }

    // print sum of array
    cout << "\nSum of array is = " << sum << endl;
}

// Driver code
int main()
{
    string str = "2, 6, 3, 14";

    convertStrtoArr(str);

    return 0;
}
