#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define M 1000000007
#define pb push_back
int prefix_function(string s)
{
    int n = (int)s.length();
    vector<int> pi(n);
    pi[0] = 0;
    for (int i = 1; i < n; i++)
    {
        int j = pi[i - 1];
        while (j > 0 && s[i] != s[j])
            j = pi[j - 1];
        if (s[i] == s[j])
            j++;
        pi[i] = j;
    }
    return pi[n - 1];
}
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
        cin >> s;
        int i = 0, j = s.size() - 1;
        int k = 0;
        while (i < j)
        {
            if (s[i] != s[j])
                break;
            i++;
            j--;
            k++;
        }
        string l = s.substr(0, k);
        int msize = s.size() - 2 * k;
        string mid = "";
        if (msize)
        {
            string w = s.substr(k, msize);
            string z = w;
            reverse(z.begin(), z.end());
            string str = w + '#' + z;
            int p1 = prefix_function(str);
            string str2 = z + '#' + w;
            int p2 = prefix_function(str2);
            //   string mid="";
            if (p1 > p2)
            {
                mid = str.substr(0, p1);
            }
            else
            {
                mid = str2.substr(0, p2);
            }
        }
        string ans = l;
        ans += mid;
        reverse(l.begin(), l.end());
        ans += l;
        cout << ans << endl;
    }
}
