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
    //   freopen("output.txt","w",stdout);
#endif
    string s;
    cin >> s;
    int n = s.size();
    int ans[10][n];
    memset(ans, 0, sizeof(ans));
    int m = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (s[i] - '0' > m)
            m = s[i] - '0';

        for (int j = 0; j < s[i] - '0'; j++)
        {
            ans[j][i] = 1;
        }
    }
    cout << m << "\n";
    for (int i = 0; i <= 9; i++)
    {
        int x = 0;
        while (x < n && ans[i][x] == 0)
            x++;
        for (int j = x; j < n; j++)
            cout << ans[i][j];
        cout << " ";
    }
}
