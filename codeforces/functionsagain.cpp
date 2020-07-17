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
        freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int s, x;
    cin >> s;
    vector<int> v(s - 1);
    cin >> x;
    for (int i = 0; i < s - 1; i++)
    {
        int y;
        cin >> y;
        v[i] = abs(x - y);
        x = y;
    }
    int n = 0, p = v[s - 2], ans = v[s - 2];
    for (int i = s - 3; i >= 0; i--)
    {
        int pn = n, pp = p;
        n = max(0LL, pp - v[i]);
        p = max(0LL, pn + v[i]);
        ans = max(ans, p);
        pp = p;
        pn = n;
    }
    cout << ans;
    return 0;
}
