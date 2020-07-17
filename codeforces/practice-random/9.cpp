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
    int n;
    cin >> n;
    int sum = 0;
    vector<int> vec(n);
    for (auto &i : vec)
        cin >> i, sum += i;
    sort(vec.begin(), vec.end());
    int diff = 0;
    int f = vec[0];
    for (int i = 1; i < n; i++)
    {
        int x = vec[i];

        for (int j = 1; j * j <= x; j++)
        {
            if (x % j == 0)
            {
                int p = x / j, q = j;
                diff = max(diff, max({0LL, (f + x - f * p - q), (f + x - f * q - p)}));
            }
        }
    }

    cout << sum - diff;

    return 0;
}
