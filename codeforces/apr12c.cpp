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
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
      cin >> i;
    vector<int> temp(n);
    temp[0] = v[0];
    for (int i = 1; i < n; i++)
    {
      temp[i] = max(temp[i - 1], v[i]);
    }
    int add = 0;
    for (int i = 0; i < n; i++)
    {
      add = max(add, temp[i] - v[i]);
    }
    // debug(add);

    int x = add + 1, ans;
    if (x && (!(x & (x - 1))))
    {
      ans = floor(log2(x));
    }
    else
    {
      ans = floor(log2(x)) + 1;
    }
    cout << ans << endl;
  }
}
