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
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    vector<int> a(n + 1), p(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        p[i] += p[i - 1] + a[i];
    }
    map<int, int> mp;
    int ans = 0, last = 0;
    for (int i = 0; i <= n; i++)
    {
        if (mp.find(p[i]) != mp.end())
        {
            last = max(last, mp[p[i]] + 1);
        }
        ans += i - last;
        mp[p[i]] = i;
    }
    cout << ans;
}
