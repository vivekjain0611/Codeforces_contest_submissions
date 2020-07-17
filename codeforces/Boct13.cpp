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
    FAST
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int i=0,j=n-1;
        for(i=0;i<n;i++)
        {
            if(s[i]=='1')
            break;
        }
        for(j=n-1;j>=0;j--)
        {
            if(s[j]=='1')
            break;
        }
        if(i==n||j==-1)
        {cout<<n<<endl;}
        
        else
        {
            int ans1,ans2;
            ans1 = 2 * max(i+1,n-i);
            ans2 = 2* max(n-j,j+1);
            cout<<max(ans1,ans2)<<endl;
        }
    }
    return 0;
}

