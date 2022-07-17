/* Light Up the Bulbs
Send Feedback
A bulb can be ‘ON’ or ‘OFF’. Mr. Navdeep got ‘n’ number of bulbs and their status, whether they are ‘ON’ or ‘OFF’. Their status is represented in a string of size ‘n’ consisting of 0’s and 1’s, where ‘0’ represents the bulb is in ‘OFF’ condition and ‘1’ represent the bulb is ‘ON’. Mr. Navdeep has been given the task to light up all the bulbs.
He can perform two operations.
First, chose any segment of bulbs and reverse them means chose any substring and reverse it. E.g. “0 110 001” -> “0 011 001”. Substring (1, 3) is reversed here. This operation will cost him Rs. ‘X’.
Second, chose any segment of bulbs and reverse their present condition. i.e. if the bulb is ‘ON’, make it ‘OFF’ and if it is ‘OFF’, make it ‘ON’. E.g. “0 011 001” -> “0 100 001”. Substring (1, 3) is complemented. This operation will cost him Rs. ‘Y’.
You need to help Mr. Navdeep that how much minimum amount it will require to make all the bulbs lightened. (or make all the characters as ‘1’ in the representation string)
Input Format:
The first line will contain three space separated integers: ‘n’, ‘X’, ‘Y’ denoting the number of bulbs, cost of first operation and cost of second operation respectively.
The second line contains a representation string of length ‘n’ consisting of 0’s and 1’s representing whether the bulb is ‘OFF’ or ‘ON’.
Output Format:
Print a single integer denoting the minimum cost required to light up all the bulbs.
Constraints:
1 <= n <= 3,00,000
0 <= X, Y <= 10^9
Time Limit: 1 second
Sample Input:
5 1 10
01000
Sample Output:
11
Explanation:
First, Reverse substring (0, 1): “01000” -> “10000”, COST = 1
Second, Invert substring (1, 4): “10000” -> “11111”, COST = 10
Total cost = 1+10 => 11  */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, y;
    cin >> n >> x >> y;
    string str;
    cin >> str;
    int count = 0;
    // count = no. of reverse operations/flips required to put all the zeros together so that only one light up operation is required
    if (str[0] == '0')
    {
        count++;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (str[i] == '1' && str[i + 1] == '0')
        {
            count++;
        }
    }
    // no. of reverse operations required = no. of continuos segments of zeros - 1
    // that's why I added 1 at the end of string to count no. of changes from zero to one
    // example : s = 0011100010 in this case count= 3 -1 = 2
    if (count == 0)
    {
        cout << 0;
        return 0;
    }
    // count*y = cost of lighting all the segments of zeros in our example it will be 3*y as there are 3 segments of zeros
    //(count-1)*x = cost of reverse operations required to get one continuos segment + 1*y (cost of lighting up that 1 segment)
    int totalCost = (min(x, y) * (count - 1)) + y;
    cout << totalCost << endl;

    return 0;
}