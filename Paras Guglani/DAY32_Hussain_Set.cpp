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
int remove_max(int *curr_m, vi &a, queue<int> &q, int *end)
{
    int max_ele = 0;
    // a[*end]=5;
    // cout << "here front1 is "<< q.front()<< endl;

    ////* array is not empty && (if queue is empty || last element of array is larger than front of queue)
    if (*end >= 0 && (q.empty() || (a[*end] >= q.front())))
    {
        max_ele = a[*end];
        (*end)--;
    }
    else
    {
        max_ele = q.front();
        q.pop();
    }
    q.push(max_ele / 2); //* again push to queue
    // cout << "here end is " << *end << endl;
    // cout << "here front is "
        //  << q.front()
        //  << endl;

    // which selected from the queue or array
    return max_ele;
}
void pgsolve()
{

    int n, m;
    cin >> n >> m;
    vi a(n);

    rep(i, n) cin >> a[i];
    queue<int> q;
    //* take comman variables cause queries are in chronological manner (a[i] > q[i-1])
    //* so satrt counting from where you end last time
    int count_m = 0;
    int end = n - 1; //* point to sorted array end
    sortall(a);

    while (m--)
    {
        int curr_m;
        cin >> curr_m; //* query point
        int ans = 0;  //* comman ans
                      //* comman count_m (0 < 1)
        for (; count_m < curr_m; count_m++)
        {
            // if (end >= 0 && (q.empty() || (a[end] >= q.front())))
            // {
            //     ans = a[end];
            //     end--;
            // }
            // else
            // {
            //     ans = q.front();
            //     q.pop();
            // }
            // q.push(ans / 2);
            ans = remove_max(&curr_m, a, q, &end);
        }
        cout << ans << endl;
    }
}

int32_t main()

{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    auto start1 = high_resolution_clock::now();

#ifdef __GNUC__
    freopen("Error.txt", "w", stderr);
#endif

    pgsolve();

    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
#ifdef __GNUC__
    cerr << "\n Time: " << duration.count() / 1000 << " ms" << endl;
#endif
    return 0;
}