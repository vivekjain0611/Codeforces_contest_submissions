#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> ans(n);
    ans[0] = arr[0];
    ans[1] = ans[0] + arr[1];
    int mx = max(ans[0], ans[1]);
    for (int i = 2; i < n; i++)
    {
        ans[i] = arr[i] + mx;
        mx = max(mx, ans[i]);
    }
    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";
}