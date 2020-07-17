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
        int n0, n1, n2;
        cin >> n0 >> n1 >> n2;
        if (!n1)
        {
            if (n0)
            {
                for (int i = 0; i <= n0; i++)
                    cout << "0";
                cout << endl;
            }
            else
            {
                for (int i = 0; i <= n2; i++)
                    cout << "1";
                cout << endl;
            }
        }
        else
        {
            // string ans="";
            if (n1 % 2 == 0)
            {
                cout << "0";
                n1--;
            }
            for (int i = 0; i < n2; i++)
            {
                cout << "1";
            }

            for (int i = 0; i <= n1; i++)
            {
                if (i & 1)
                    cout << "0";
                else
                    cout << "1";
            }
            for (int i = 0; i < n0; i++)
                cout << "0";
            cout << endl;
        }
    }
    return 0;
}
