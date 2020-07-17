#include <bits/stdc++.h>
/*Learn to live and Live to learn*/
using namespace std;
#define int long long int
#define debug(x) cout << '>' << #x << ':' << x << endl;
#define M 1000000007
#define pb push_back
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //   #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    //   #endif
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &i : a)
        cin >> i;
    sort(a.begin(), a.end());
    int ans = 0;
    for (auto it = a.begin(); it != a.end(); it++)
    {
        int p = upper_bound(it, a.end(), 2 * (*it)) - it;
        ans = max(ans, p);
    }
    cout << n - ans << endl;
}
