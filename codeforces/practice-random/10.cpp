#include <bits/stdc++.h>
using namespace std;

#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
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
    int n, m;
    cin >> n >> m;
    vector<int> f(n + 1);
    f[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        f[i] = (i * f[i - 1]) % m;
    }

    int ans = 0;

    for (int i = 1; i <= n; i++)
    {
        ans += (((f[i] * f[n - i + 1]) % m) * (n - i + 1)) % m;
        ans %= m;
    }
    cout << ans << endl;
    return 0;
}
