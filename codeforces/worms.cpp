#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int n, m;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=1;i<n;i++)
    arr[i]+=arr[i-1];
    cin>>m;
    while(m--)
    {
        int x;
        cin>>x;
        int ans=lower_bound(arr.begin(),arr.end(),x)-arr.begin();
        cout<<ans+1<<endl;

    }
    return 0;
}