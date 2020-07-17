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
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    vector<int> A, B;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == '1' && b[i] == '0')
            A.pb(i);
        else if (a[i] == '0' && b[i] == '1')
            B.pb(i);
    }
    int ans = 0;
    int p = A.size();
    int q = B.size();
    //   cout<<p<<" "<<q;
    int i = 0, j = 0;
    while (i < p && j < q)
    {
        if (abs(A[i] - B[j]) == 1)
        {
            ans += 1;
            i++;
            j++;
        }
        else if (A[i] < B[j] - 1)
        {
            ans += 1;
            i++;
        }
        else if (A[i] - 1 > B[j])
        {
            ans += 1;
            j++;
        }
    }
    ans += (p - i + q - j);
    cout << ans << endl;
}
