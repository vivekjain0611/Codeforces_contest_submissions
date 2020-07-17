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
    int n, k;
    cin >> n >> k;
    if (k == 1)
        cout << n;
    else
    {
        vector<int> dp(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            dp[i] = n / i;
        }

        for (int i = 3; i <= k; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                int sum = 0;
                for (int p = j; p <= n; p += j)
                {
                    sum += dp[p];
                    sum%=M;
                }
                dp[j] = sum;
            }
        }
        int ans = 0;
        for (auto &i : dp)
        {
            ans += i;
            ans%=M;
        }
        cout << ans << endl;
    }
}
