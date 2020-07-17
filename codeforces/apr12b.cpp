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
        {
            cin >> i;
        }
        sort(v.begin(), v.end(), greater<int>());
        vector<int> ans;
        for(int i=0;i<n/2;i++)
        {
            ans.push_back(v[i]);
            ans.push_back(v[n-i-1]);
        }
        if(n&1)
        ans.push_back(v[n/2]);

        for(int i=n-1;i>=0;i--)
        cout<<ans[i]<<" ";
        cout<<endl;
    }
}
