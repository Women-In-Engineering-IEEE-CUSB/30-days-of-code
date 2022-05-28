/* Different Names
Send Feedback
In Little Flowers Public School, there are many students with same first names. You are given a task to find the students with same names. You will be given a string comprising of all the names of students and you have to tell the name and count of those students having same. If all the names are unique, print -1 instead.
Note: We don't have to mention names whose frequency is 1.
Input Format:
The only line of input will have a string ‘str’ with space separated first names of students.
Output Format:
Print the names of students along with their count if they are repeating. If no name is repeating, print -1
Constraints:
1 <= |str| <= 10^5
Time Limit: 1 second
Sample Input 1:
Abhishek harshit Ayush harshit Ayush Iti Deepak Ayush Iti
Sample Output 1:
harshit 2
Ayush 3
Iti 2
Sample Input 2:
Abhishek Harshit Ayush Iti
Sample Output:
-1 */

#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

#define ff first
#define ss second
#define int long long
using ll = long long;
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define PI 3.1415926535897932384626
#define ps(x, y) fixed << setprecision(y) << x
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
#define all(x) (x).begin(), (x).end()
#define sortall(x) sort(all(x))
#define rep(i, n) for (int i = 0; i < n; ++i)
#define REP(i, k, n) for (int i = k; i < n; ++i)
#define REPR(i, k, n) for (int i = k; i > n; --i)
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define vi vector<int>
vector<string> splitter(string s)
{
    vector<string> v;
    int start = 0;
    int end = 0;
    while (end < s.length())
    {
        while (s[end] != ' ')
        {
            end++;
        }
        v.push_back(s.substr(start, end - start));
        end++;
        start = end;
    }
    return v;
}
void pgsolve()
{ // Breaking input into word using string stream
   /*  string names;
    getline(cin, names);
    // cout << names << '\n';

    // Used for breaking words
    stringstream iss(names);

    unordered_map<string, int> m1;
    string temp;

    while (iss >> temp)
    {
        m1[temp]++;
    }

    unordered_map<string, int>::iterator it = m1.begin();
    int count = 0;
    for (it; it != m1.end(); ++it)
    {
        if (it->second > 1)
        {
            cout << it->first << " " << it->second << '\n';
            count++;
        }
    }
    if (count == 0)
    {
        cout << -1 << '\n';
    } */
    //  directly inserting in map while adding elements by taking characters till space
    // string str;
    // getline(cin, str);

    // map<string, int> feq;
    // int count = 0;

    // str[str.length()] = ' ';
    // str[str.length() + 1] = '\0';

    // string word = "";
    // for (int i = 0; i <= str.length(); i++)
    // {
    //     if (str[i] == ' ')
    //     {
    //         feq[word]++;
    //         word = "";
    //     }
    //     else
    //     {
    //         word += str[i];
    //     }
    // }

    // for (auto pair : feq)
    // {
    //     if (pair.second >= 2)
    //     {
    //         cout << pair.first << " " << pair.second << endl;
    //         count++;
    //     }
    // }
    // if (!count)
    // {
    //     cout << "-1";
    // }

//splitting in vector of string and storing frequency of each word in map and printing the word and frequency if frequency is greater than 1
    // string s;
    // getline(cin, s);
    // map<string, int> m;
    // vector<string> v = splitter(s);
    // for (int i = 0; i < v.size(); i++)
    // {
    //     m[v[i]] += 1;
    // }
    // //iterate through map
    // int count=0;
    // map<string, int>::iterator it;
    // for (it = m.begin(); it != m.end(); it++)
    // {
    //     string name = it->first;
    //     int freq = it->second;
    //     if (freq > 1)
    //     {
    //         cout << name << " " << freq << endl;
    //         count++;
    //     }
    // }
    // if(!count)
    // {
    //     cout << "-1";
    // }
}

int32_t main()

{
    // ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    auto start1 = high_resolution_clock::now();

#ifdef __GNUC__
    freopen("error.txt", "w", stderr);
#endif
    
    pgsolve();

    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
#ifdef __GNUC__
    cerr << "\n Time: " << duration.count() / 1000 << " ms" << endl;
#endif
    return 0;
}