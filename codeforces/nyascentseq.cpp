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
    int n, t;
    cin >> n;
    vector<int> vmin, vmax;
    t = n;
    while (t--)
    {
        int L, cmin, cmax;
        cin >> L;
        vector<int> a(L);
        for (auto &i : a)
            cin >> i;
        bool flag = true;
        cmin = a[0], cmax = a[0];
        for (int i = 1; i < L; i++)
        {
            if (a[i] > a[i - 1])
            {
                flag = false;
                break;
            }
            cmin = min(cmin, a[i]);
            cmax = max(cmax, a[i]);
        }
        if (flag)
        {
            vmin.push_back(cmin);
            vmax.push_back(cmax);
        }
    }
    sort(vmax.begin(), vmax.end());
    int sz = vmax.size();
    //   debug(sz);
    int ans = 0;
    for (int i = 0; i < vmin.size(); i++)
    {
        int x = upper_bound(vmax.begin(), vmax.end(), vmin[i]) - vmax.begin();
        //   debug(x);
        ans += (sz - x);
    }
    //   debug(ans);
    ans += (n - sz) * (n + sz);
    cout << ans;
}
