#include <bits/stdc++.h>
using namespace std;
// https://codeforces.com/problemset/problem/359/B
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
    freopen("output.txt","w",stdout);
#endif
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        if (i <= k)
        {
            cout << 2 * i - 1 << " " << 2 * i << " ";
        }
        else
        {
            cout << 2 * i << " " << 2 * i - 1 << " ";
        }
    }
}
