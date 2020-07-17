#include <bits/stdc++.h>
using namespace std;
#define FAST                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define int long long int
#define cases \
    int t;    \
    cin >> t; \
    while (t--)
#define pb push_back
#define M 1000000007
int32_t main()
{
    FAST
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
        int c = 0, p = 0;
        while (n % 10 == 0)
        {
            c++;
            n /= 10;
        }
        while (n % 2 == 0)
        {
            p++;
            n /= 2;
        }
        if (p < c || n != 1)
            cout << "No\n";
        else
        {
            cout << "Yes\n";
        }
    }
    return 0;
}