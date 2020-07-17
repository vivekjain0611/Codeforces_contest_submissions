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
    int n, m;
    cin >> n;
    vector<int> B(n);
    for (auto &i : B)
        cin >> i;
    cin >> m;
    vector<int> G(m);
    for (auto &i : G)
        cin >> i;
    sort(B.begin(), B.end());
    sort(G.begin(), G.end());
    int i = 0, j = 0, ans = 0;
    while (i < n && j < m)
    {
        if (abs(B[i] - G[j]) <= 1)
        {
            ans++;
            i++;
            j++;
        }
        else if (B[i] < G[j])
            i++;
        else
            j++;
    }
    cout << ans;
}
