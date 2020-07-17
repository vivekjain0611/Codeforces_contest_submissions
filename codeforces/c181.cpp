//calculating ncr
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define debug(x) cout << '>' << #x << ':' << x << endl;
#define M 1000000007
vector<int> factorial;
#define pb push_back
int binpow(int a, int b)
{
    a %= M;
    int res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a % M;
        a = a * a % M;
        b >>= 1;
    }
    return res;
}
int inverse(int x)
{
    return binpow(x, M - 2);
}
int ncr(int n, int k)
{
    return (factorial[n] % M * inverse(factorial[k]) % M * inverse(factorial[n - k]) % M) % M;
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
      #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
    //   freopen("output.txt","w",stdout);
      #endif
    int a, b, n;
    cin >> a >> b >> n;
    factorial.resize(n + 1);
    factorial[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial[i] = factorial[i - 1] * i % M;
    }
    int ans = 0;
    for (int i = 0; i <= n; i++)
    {
        int x = (i * a) + (n - i) * b;
        bool flag = true;
        while (x)
        {
            int d = x % 10;
            x /= 10;
            if (d != a && d != b)
            {
                flag = false;
                break;
            }
        }
        if (flag)
            ans = (ans % M + ncr(n, i)) % M;
    }
    cout << ans << endl;
}
