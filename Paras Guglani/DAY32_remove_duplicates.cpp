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
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define rep(i, n) for (int i = 0; i < n; ++i)
#define REP(i, k, n) for (int i = k; i < n; ++i)
#define REPR(i, k, n) for (int i = k; i > n; --i)
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define vi vector<int>

// vector<int> removeDuplicates(vector<int> arr)
// {
// // https: // www.codingninjas.com/codestudio/problems/remove-duplicates_920325
// }

void pgsolve()
{

    // method 1 insert all elements in set preserves order takes n^2 time
    int n;
    cin >> n;
    unordered_set<int> s;  
    vi a(n);
    vi ans;
    rep(i, n)
    {
        cin >> a[i];
      
    }
    for (int i = 0; i < a.size(); i++)
    {
    //* find number in set
        if(s.find(a[i]) == s.end()){   //* if not found then add it to ans and set
        //average O(1) time in find and insert because unordered set is hash table
       
            s.insert(a[i]);
            ans.push_back(a[i]);
        }
    }
    for(auto el: ans){
        cout << el << " ";
    }


    /*     //? method 2 in place with constant space and nlogn time using sort

        int n;
        cin >> n;
        vi a(n);

        rep(i, n)
        {
            cin >> a[i];
        }
        sortall(a);
        int left = 0, right = 0;

        for (int right = 1; right < a.size(); right++)
        {
            if (a[left] != a[right])
                left++;
            a[left] = a[right];
        }

        // cout<< left + 1<<endl;
        rep(i, left + 1)
        {
            cout << a[i] << " ";
        } */

    // method 3 can use map to store frequency of each element and then iterate over map to get the answer 
    // time complexity O(n)
    // space complexity O(n)
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