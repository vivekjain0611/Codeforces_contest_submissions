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
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d, x, y, x1, y1, x2, y2, p, q;
        cin >> a >> b >> c >> d >> x >> y >> x1 >> y1 >> x2 >> y2;
        bool ans = true;
        if (a || b)
        {
            if (x1 == x2)
            {
                ans = false;
            }
        }
        if (c || d)
        {
            if ((y1 == y2))
            {
                ans = false;
            }
        }
        if (ans)
        {
            p = x - a + b;
            q = y - c + d;
            if (p >= x1 && p <= x2)
            {
                if (q >= y1 && q <= y2)
                    cout << "YES\n";
                else
                {
                    cout << "NO\n";
                }
            }
            else
            {
                cout << "NO\n";
            }
        }
        else
        {
            cout << "NO\n";
        }
    }
}
