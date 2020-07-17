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
unordered_map<int,int>m;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (auto &i : a)
            cin >> i;
        for (auto &i : b)
            cin >> i;
        bool p1 = false, m1 = false;
        int ans = true;
        for (int i = 0; i < n; i++)
        {
            if (b[i] > a[i])
            {
                if (p1 == false)
                {
                    ans = false;
                    break;
                }
            }
            else if (b[i] < a[i])
            {
                if (m1 == false)
                {
                    ans = false;
                    break;
                }
            }

            if (a[i] == 1)
                p1 = true;
            if (a[i] == -1)
                m1 = true;
            if (ans == false)
                break;
            if (p1 && m1)
                break;
        }
        if (ans)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
