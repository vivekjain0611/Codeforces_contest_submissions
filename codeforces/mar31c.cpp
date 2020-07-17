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
        string s;
        int n, k;
        cin >> n >> k;
        cin >> s;
        int rows = n / k;
        int low = 0, high = k - 1;
        int ans = 0;
        while (low <= high)
        {
            int arr[26] = {0};
            for (int i = low; i < n; i += k)
            {
                arr[s[i] - 'a']++;
            }
            for (int i = high; i < n; i += k)
            {
                arr[s[i] - 'a']++;
            }
            // sort(arr, arr + 26, greater<int>());
            int x = arr[0];
            for (int i = 1; i < 26; i++)
            {
                x = max(x, arr[i]);
            }
            // int x = arr[0];
            if (low == high)
            {
                ans += (rows - x / 2);
            }
            else
            {
                ans += (2 * rows - x);
            }
            low++;
            high--;
        }
        cout << ans << endl;
    }
}
