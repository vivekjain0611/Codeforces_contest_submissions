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
        int n;
        cin >> n;
        vector<int> arr(n), ans(n, 0);
        for (auto &i : arr)
            cin >> i;
        int p[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
        int m = 1;
        for (int i = 0; i < 11; i++)
        {
            bool flag = false;
            for (int j = 0; j < n; j++)
            {
                if (arr[j] % p[i] == 0)
                {
                    if (ans[j] == 0)
                    {
                        flag = true;
                        ans[j] = m;
                    }
                }
            }
            if (flag)
                m++;
        }

        cout << m - 1 << endl;
        for (int i = 0; i < n; i++)
            cout << ans[i] << " ";
        cout << endl;
    }
}
