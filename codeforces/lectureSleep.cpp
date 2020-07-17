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
    // freopen("output.txt", "w", stdout);
#endif
    int n, k, ans = 0;
    cin>>n>>k;
    vector<int> a(n);
    for (int &i : a)
        cin >> i;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x)
        {
            ans += a[i];
            a[i] = 0;
        }
    }
    for (int i = 1; i < n; i++)
        a[i] += a[i - 1];
    int p = 0, x = 0, lol = INT_MIN;
    for (int i = k - 1; i < n; i++)
    {
        lol = max(lol, a[i] - p);
        p = a[x++];
    }
    cout << ans + lol;
}
