#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        string s;
        cin >> n >> m;
        cin >> s;
        int wrong[m];
        for (int i = 0; i < m; i++)
            cin >> wrong[i];
        int darr[n + 1] = {};
        darr[0]++;
        for (int i = 0; i < m; i++)
        {
            darr[0]++;
            darr[wrong[i]]--;
        }
        for (int i = 1; i <= n; i++)
        {
            darr[i] += darr[i - 1];
        }
        int ans[26] = {};
        for (int i = 0; i < n; i++)
        {
            ans[s[i] - 'a'] += darr[i];
        }
        for (int i = 0; i < 26; i++)
            cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}