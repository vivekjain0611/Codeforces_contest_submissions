#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    int n, m, k;
    cin >> n >> m >> k;
    int a[n + 1] = {0}, b[m + 1] = {0};
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x)
        {
            c++;
            a[c]++;
        }
        else
        {
            c = 0;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        a[i] += a[i + 1];
    }
    c = 0;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        if (x)
        {
            c++;
            b[c]++;
        }
        else
        {
            c = 0;
        }
    }
    for (int i = m - 1; i >= 0; i--)
    {
        b[i] += b[i + 1];
    }
    int ans = 0;
    for (int i = 1; i * i <= k; i++)
    {
        if (k % i == 0)
        {
            if (i <= n && k / i <= m)
            {
                ans += (a[i] * b[k / i]);
            }
            if (i != k / i)
            {
                if (i <= m && k / i <= n)
                {
                    ans += (a[k / i] * b[i]);
                }
            }
        }
    }
    cout << ans;
}