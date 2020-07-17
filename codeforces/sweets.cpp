#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define debug(x) cout << '>' << #x << ':' << x << endl;
#define M 1000000007
#define pb push_back
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    //   freopen("output.txt","w",stdout);
#endif
    int n, m;
    cin >> n >> m;
    vector<int> a(n), dp(n);
    for (auto &i : a)
        cin >> i;
    sort(a.begin(), a.end());
    for (int i = 1; i < n; i++)
        a[i] += a[i - 1];
    for (int i = 0; i < n; i++)
    {
        dp[i] = a[i];
        if (i >= m)
            dp[i] += dp[i - m];
    }

    for (int i : dp)
        cout << i << " ";
}
