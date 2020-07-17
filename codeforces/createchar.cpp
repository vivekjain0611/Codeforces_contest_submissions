#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);
#define int long long int
#define cases int t;cin>>t;while(t--)
#define pb push_back
#define M 1000000007
int32_t main()
{
    FAST
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int q,s,i,e;
    cin>>q;
    while(q--)
    {
        int ans=0;
        cin>>s>>i>>e;
        int x = (2+i-s+e)/2;
        if(x>0)
        ans = e - x + 1;
        else
        {
            ans = e+1;
        }
        
        cout<<max(ans,0LL)<<endl;


    }
    return 0;
}