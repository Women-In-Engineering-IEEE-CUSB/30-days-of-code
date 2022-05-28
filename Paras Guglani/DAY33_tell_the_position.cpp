/* Tell the positions
Send Feedback
In a class there are ‘n’ number of students. They have three different subjects: Data Structures, Algorithm Design & Analysis and Operating Systems. Marks for each subject of all the students are provided to you. You have to tell the position of each student in the class. Print the names of each student according to their position in class. Tie is broken on the basis of their roll numbers. Between two students having same marks, the one with less roll number will have higher rank. The input is provided in order of roll number.
Input Format:
First line will have a single integer ‘n’, denoting the number of students in the class.
Next ‘n’ lines each will have one string denoting the name of student and three space separated integers m1, m2, m3 denoting the marks in three subjects.
Output Format:
Print ‘n’ lines having two values: First, the position of student in the class and second his name.
Constraints:
1 <= n <= 10^5
0 <= m1, m2, m3 <= 100
Sample Input:
3
Mohit 94 85 97
Shubham 93 91 94
Rishabh 95 81 99
Sample Output:
1 Shubham
2 Mohit
3 Rishabh
 */
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

// method 2
class student
{
public:
    string name;
    int marks;
    int roll;
};
bool mycompare(student a, student b)
{
    if (a.marks != b.marks)
    {
        return (a.marks > b.marks);
    }
    else
    {
        return (a.roll < b.roll);
    }
}

// method 3
struct pairs
{
    int roll;
    string name;
    int marks;
};
bool arranger(pairs p1, pairs p2)
{
    if (p1.marks > p2.marks)
    {
        return 1;
    }
    else if (p2.marks > p1.marks)
    {
        return 0;
    }
    else 
    {
        if (p1.roll < p2.roll)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}

void pgsolve()
{
    // vector of pair int and string
    // int n;
    // cin >> n;
    // vector<pair<int, string>> v;
    // rep(i, n)
    // {
    //     string s;
    //     cin >> s;
    //     int a, b, c;
    //     cin >> a >> b >> c;
    //     v.pb({a + b + c, s});
    // }

    //  stable_sort(all(v), greater<pair<int, string>>());
    // rep(i, n)
    // {
    //     cout << i + 1 << " " << v[i].ss << endl;
    // }

    // method 2 //vector of students
    // int n;
    // std::cin >> n;
    // // std::vector<string> name;		//ncross1
    // std::vector<student> stud; // ncross3
    // for (int i = 0; i < n; ++i)
    // {
    //     string temp_name;
    //     int sub1;
    //     int sub2;
    //     int sub3;
    //     cin >> temp_name >> sub1 >> sub2 >> sub3;
    //     int sum = sub1 + sub2 + sub3;
    //     student temp_sub;
    //     temp_sub.name = temp_name;
    //     temp_sub.marks = sum;
    //     temp_sub.roll = i + 1;
    //     stud.push_back(temp_sub);
    // }

    // sort(stud.begin(), stud.end(), mycompare);
    // for (int i = 0; i < n; ++i)
    // {
    //     cout << i + 1 << " " << stud.at(i).name << '\n';
    // }

    // method 3  array of pairs
    // int n;
    // cin >> n;
    // pairs *arr = new pairs[n];
    // int roll = 1;
    // for (int i = 0; i < n; i++)
    // {
    //     string name;
    //     cin >> name;
    //     int m1, m2, m3;
    //     cin >> m1 >> m2 >> m3;
    //     int total_marks = m1 + m2 + m3;
    //     arr[i] = {roll, name, total_marks};
    //     roll += 1;
    // }
    // sort(arr, arr + n, arranger);
    // int count = 1;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << count << " " << arr[i].name << endl;
    //     count += 1;
    // }

    // method 4 vector of vector of strings
    int n, x, y, z;
    cin >> n;
    string s;
    vector<vector<string>> a(301);
    for (int i = 0; i < n; i++)
    {
        cin >> s >> x >> y >> z;
        a[x + y + z].push_back(s);
    }

    n = 1;
    for (int i = a.size() - 1; i >= 0; i--)
    {
        for (int j = 0; j < a[i].size(); j++)
        {
            cout << n++ << " " << a[i][j] << endl;
        }
    }
}

int32_t main()

{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    auto start1 = high_resolution_clock::now();

#ifdef __GNUC__
    freopen("error.txt", "w", stderr);
#endif

    // w(t)
    // {
    pgsolve();
    // }
    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
#ifdef __GNUC__
    cerr << "\n Time: " << duration.count() / 1000 << " ms" << endl;
#endif
    return 0;
}