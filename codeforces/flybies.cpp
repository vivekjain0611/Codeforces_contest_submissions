#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);
#define int long long int
#define cases int t;cin>>t;while(t--)
#define pb push_back
#define M 1000000007
int n,T;
int t[1001];
bool check(int x)
{ 
    int diff;
    for(int i=0;i<n+1-x;i++)
    {
        diff = t[i+x-1]-t[i];
        if(diff<=T)
        return true;
    }
    if(diff<=T)
    return true;
    else return false;
}
int32_t main()
{
    FAST
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>t[i];
    sort(t,t+n);
    cin>>T;
    int low = 1,high = n,ans = 0;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(check(mid))
        {
            ans = mid;
            low = mid+1;
        }
        else
        {
            high = mid - 1;
        }
        
    }
    cout<<ans;
    return 0;
}