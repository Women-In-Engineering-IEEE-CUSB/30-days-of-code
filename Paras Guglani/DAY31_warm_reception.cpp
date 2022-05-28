/*
There is only one beuuty parlour in the town CodingNinjasLand. The receptionist at the beauty parlor is flooded with appointment requests because the “Hakori” festival is round the corner and everyone wants to look good on it.
She needs your help. The problem is they don’t have chairs in reception. They are ordering chairs from NinjasKart. They don’t want to order more than required. You have to tell the minimum number of chairs required such that none of the customers has to stand.
Input Format :
First line contains the number of customers that will come. Second line contains N space-separated integers which represent the arrival timings of the customer. Third line contains N space-separated integers which represent the departure timings of the customer. Arrival and departure timings are given in 24-hour clock.
Constraints:
1<= N <= 100
Arrival and departure timings lie in the range [0000 to 2359]
Time Limit: 1 second
Output Format :
You have to print the minimum number of chairs required such that no customer has to wait standing.
Sample Test Cases:
Sample Input 1 :
5
900 1000 1100 1030 1600
1900 1300 1130 1130 1800
Sample Output 1:
4
Explanation:
4 because at 1100 hours, we will have maximum number of customers at the shop, throughout the day. And that maximum number is 4.
*/

// important problem to solve

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

// method 2 status storing
struct detail
{
    int time;
    bool status; //* in or out
};

bool my_sort(detail a, detail b)
{
    return (a.time < b.time);
}
// method 3 triplets
struct triplets
{
    int st;
    int et;
    int diff;
};
bool sort_according_to_time_difference(triplets t1, triplets t2)
{
    return (t1.diff > t2.diff);
}
bool sort_according_to_starting_time(triplets t1, triplets t2)
{
    return (t1.diff > t2.diff);
}
bool sort_according_to_end_time(triplets t1, triplets t2)
{
    return (t1.diff > t2.diff);
}
//method 5
int findPlatform(int arr[], int dep[], int n)
{
    sort(arr, arr + n);
    sort(dep, dep + n);
    int chair_needed = 1, result = 1;
    int i = 1, j = 0;
    while (i < n && j < n)
    {
        if (arr[i] <= dep[j])
        {
            chair_needed++;
            i++;
            if (chair_needed > result)
                result = chair_needed;
        }
        else
        {
            chair_needed--;
            j++;
        }
    }
    return result;
}

void pgsolve()
{

    /* //method 1 storing in vector of pairs
     int n, sum = 0, ans = 0, x;
     cin >> n;
     vector<pair<int, int>> hash(2401, pair<int, int>{0, 0});

     for (int i = 0; i < n; i++)
     {
         cin >> x;
         hash[x].first++;
     }
     for (int i = 0; i < n; i++)
     {
         cin >> x;
         hash[x].second++;
     }

     for (int i = 0; i < hash.size(); i++)
     {
         sum += hash[i].first;
         if (ans < sum)
             ans = sum;
         sum -= hash[i].second;
     }
     cout << ans; */

    /*  //method 2 storing status
     int n;
     cin >> n;
     vector<detail> people;

     // Arrival
     for (int i = 0; i < n; i++)
     {
         int temp_time;
         cin >> temp_time;

         detail temp;
         temp.time = temp_time;
         temp.status = 1;
         people.push_back(temp);
     }

     // departure

     for (int i = 0; i < n; i++)
     {
         int temp_time;
         cin >> temp_time;

         detail temp;
         temp.time = temp_time;
         temp.status = 0;
         people.push_back(temp);
     }

     sort(people.begin(), people.end(), my_sort);

     int ans = 0, count = 0;
     for (int i = 0; i < people.size(); i++)
     {
         if (people.at(i).status == 1)
         {
             count++;
         }
         else
         {
             count--;
         }
         ans = max(ans, count);
     }
     cout << ans; */

     //method 3 tr1plets

   /*  int n;
    cin >> n;
    vector<int> arrival;
    vector<int> departure;
    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        arrival.push_back(element);
    }
    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        departure.push_back(element);
    }
    triplets *arr = new triplets[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = {arrival[i], departure[i], departure[i] - arrival[i]};
    }

    int max_intersections = 0;
    for (int i = 0; i <= 2359; i++)
    {
        int current_intersections = 0;
        for (int j = 0; j < n; j++)
        {
            if (i >= arr[j].st && i <= arr[j].et) // these <= and >= are very important. maine last time ye nahi lagaae the is wajeh se bohot problem hui thi. inhe lagaa bht zaroorie hain check... how... this code uses a time complexity of O(n), where n is 10^6. which is actually pretty good.
            {
                current_intersections++;
            }
        }
        max_intersections = max(max_intersections, current_intersections);
    }
    cout << max_intersections; */

//method 4 sorting
   /*  int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int dep[n];

    for (int i = 0; i < n; i++)
    {
        cin >> dep[i];
    }

    sort(arr, arr + n);
    sort(dep, dep + n);
    int j = 0, chairs = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < dep[j])
        {
            chairs++;
            continue;
        }
        j++;
    }

    cout << chairs << '\n'; */
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

    pgsolve();

    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
#ifdef __GNUC__
    cerr << "\n Time: " << duration.count() / 1000 << " ms" << endl;
#endif
    return 0;
}