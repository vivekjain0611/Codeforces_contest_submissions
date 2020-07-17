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
    //   unordered_map<int,int> mp;
    vector<int> vec = {4, 8, 15, 16, 23, 42};
    //   mp[4]=0;
    //   mp[8]=1;
    //   mp[15]=2;
    //   mp[16]=3;
    //   mp[23]=4;
    //   mp[42]=5;
    int n;
    cin >> n;
    vector<int> a(n + 1), dp(n + 1, INT_MAX);
    dp[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < 6; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (a[j] != vec[i])
                dp[j] = dp[j - 1];
            else
                dp[j] = min(dp[j], dp[j - 1] + 1);
        }
    }

    cout << n - 6 * dp[n] << endl;
}
