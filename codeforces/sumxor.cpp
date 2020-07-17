#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    int u, v;
    cin >> u >> v;
    int x = v - u;
    if (x < 0 || x & 1)
    {
        cout << "-1";
        return 0;
    }
    x /= 2;
    if (v == u && v == 0)
    {
        cout << "0\n";
        return 0;
    }
    if (v == u)
    {
        cout << "1\n";
        cout << v << "\n";
        return 0;
    }
    if (!(u & x))
    {
        cout << "2\n";
        cout << x << " " << u + x << endl;
    }
    else
    {
        cout << "3\n";
        cout << u << " " << x << " " << x;
    }
    return 0;
}