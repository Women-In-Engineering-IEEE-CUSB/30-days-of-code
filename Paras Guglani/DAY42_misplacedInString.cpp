#include <bits/stdc++.h>
using namespace std;
//print if first string is increasing or decreasing and changes in second string with respect to first string
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string s1, s2;
    cin >> s1 >> s2;
    int n = s1.length();
    int increase = 0;
    int decrease = 0;
    int i = 1;
    for (i = 1; i < n; i++)
    {
      if (s1[i] > s1[i - 1])
        increase = 1;
      if (s1[i] < s1[i - 1])
        decrease = 1;
    }
    if ((decrease == 1) && (increase == 0))
      cout << "decreasing:";
    if ((decrease == 0) && (increase == 1))
      cout << "increasing:";
    if ((decrease == 1) && (increase == 1))
      cout << "invalid:";
    int count = 0;
    for (int i = 0; i < n; i++)
    {
      if (s1[i] != s2[i])
        count++;
    }
    cout << count << endl;
  }

  return 0;
}
