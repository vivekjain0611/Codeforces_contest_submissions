#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    int t;
    int n;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        unordered_set<int> s;
        while (n--)
        {
            int x;
            cin >> x;
            s.insert(x);
        }
        cout << s.size() << endl;
    }
    return 0;
}