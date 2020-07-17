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
  int k, n = (1 << 17);
  cin >> k;
  cout << "2 3\n";
  cout << n + k << " " << n << " "
       << "0\n";
  cout << k << " " << n + k << " " << k;
}
