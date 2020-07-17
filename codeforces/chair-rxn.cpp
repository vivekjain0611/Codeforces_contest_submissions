#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
#define int long long int
#define dbg(x) cout << '>' << #x << ':' << x << endl;
#define M 1000000007
int32_t main()
{
    fastio
#ifndef ONLINE_JUDGE
        freopen("F:\\cp\\input.txt", "r", stdin);
    freopen("F:\\cp\\output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    vector<pair<int, int>> v(n + 1);
    v[0] = {INT_MIN, 0};
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end());
    vector<int> a(n + 1), b(n + 1), dp(n + 1, 0);
    for (int i = 0; i <= n; i++)
    {
        a[i] = v[i].first;
        b[i] = v[i].second;
    }
    v.clear();
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        int p = lower_bound(a.begin(), a.end(), a[i] - b[i]) - a.begin();
        p--;
        dp[i]++;
        dp[i] += dp[p];
        ans = max(ans, dp[i]);
    }
    cout << n - ans;

    return 0;
}
