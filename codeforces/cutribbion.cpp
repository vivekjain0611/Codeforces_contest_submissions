#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define M 1000000007
#define pb push_back
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, p[3];
    cin >> n >> p[0] >> p[1] >> p[2];
    int dp[n + 1];
    dp[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        int x = INT_MIN;
        for (int j = 0; j < 3; j++)
        {
            if (i < p[j] || dp[i - p[j]] == INT_MIN)
                continue;
            x = max(x, dp[i - p[j]] + 1);
        }
        dp[i] = x;
    }
    //   for(int i:dp)
    //   cout<<i<<" ";
    cout << dp[n] << endl;
}
