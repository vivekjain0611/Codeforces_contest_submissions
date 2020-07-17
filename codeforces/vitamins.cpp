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
    int n;
    cin >> n;
    //   vector<int> P(n),V(n);
    vector<int> V(8, INT_MAX);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        string s;
        cin >> s;
        int idx = 0;
        for (char c : s)
            idx = idx | (1 << (c - 'A'));
        //  cout<<idx<<endl;
        V[idx] = min(V[idx], x);
    }
    int ans = INT_MAX;
    for (int i = 1; i < (1 << 8); i++)
    {
        int C = 0, sum = 0;
        for (int j = 1; j < 8; j++)
        {
            if (i & (1 << j) && V[j] != INT_MAX)
            {
                C |= j;
                sum += V[j];
            }
        }
        if (C == 7)
            ans = min(ans, sum);
    }
    if (ans == INT_MAX)
        cout << "-1";
    else
        cout << ans;
}
