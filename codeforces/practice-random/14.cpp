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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n <= 3)
            cout << "-1\n";
        else
        {
            int a = n;
            if (n & 1)
                a--;
            for (int i = a; i >= 6; i -= 2)
            {
                cout << i << " ";
            }
            cout << "2 4 ";

            for (int i = 1; i <= n; i += 2)
            {
                cout << i << " ";
            }

            cout << "\n";
        }
    }

    return 0;
}
