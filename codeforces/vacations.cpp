#include <bits/stdc++.h>
// https://codeforces.com/problemset/problem/698/A
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
    int n;
    cin >> n;
    int p[] = {0, 0, 1, 1};
    int q[] = {0, 1, 0, 1};
    vector<vector<int>> a(2, vector<int>(n)),dp(2, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[0][i] = p[x], a[1][i] = q[x];
    }
    dp[0][0]=a[0][0];
    dp[1][0]=a[1][0];
    for (int i = 1; i < n; i++)
    {
        dp[0][i]=dp[1][i-1]+a[0][i];
        dp[1][i]=dp[0][i-1]+a[1][i];
        if(a[0][i-1]==0)
        {
            dp[0][i]=max(dp[0][i],dp[0][i-1]+a[0][i]);
        }
        if(a[1][i-1]==0)
        {
           dp[1][i]=max(dp[1][i],dp[1][i-1]+a[1][i]);
        }
    }
    cout << n - max(dp[0][n - 1], dp[1][n - 1]);
}
