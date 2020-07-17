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
    string s;
    cin >> s;
    int cnt = 1;
    vector<pair<int, int>> V;
    for (int i = 1; i < (int)s.size(); i++)
    {
        if (s[i] == s[i - 1])
            cnt++;
        else
        {
            if (cnt > 1)
                V.push_back({i - cnt, cnt});
            cnt = 1;
        }
    }
    if (cnt > 1)
        V.push_back({s.size() - cnt, cnt});

    for (pair<int, int> p : V)
    {
        int idx = p.first, num = p.second;
        char x;
        int start = idx;
        if (num & 1)
        {
            start++;
            x = (s[start] - 'a' + 1) % 26 + 'a';
        }
        else
        {
            if (start == 0)
                x = (s[start] - 'a' + 1) % 26 + 'a';
            else
            {
                x = (s[start - 1] - 'a' + 1) % 26 + 'a';
                if (x == s[start])
                    x = (s[start] - 'a' + 1) % 26 + 'a';
            }
        }

        for (int i = start; i < idx + num; i += 2)
        {
            s[i] = x;
        }
    }
    cout << s;
}
