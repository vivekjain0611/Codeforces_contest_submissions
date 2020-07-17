#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    int n, k;
    const int mod = 998244353;
    cin >> n >> k;
    vector<int> vec;
    // vec.push_back(0);
    int ans = 1;
    int mpnum = n * k - (k * (k - 1)) / 2;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x > n - k)
            vec.push_back(i + 1);
    }
    for (int i = 1; i < vec.size(); i++)
    {
        int x = vec[i] - vec[i - 1];
        ans = ((ans % mod) * (x % mod)) % mod;
    }
    cout << mpnum << " " << ans;
    return 0;
}