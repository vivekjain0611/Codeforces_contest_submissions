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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<string,int> one,zero;
        string s;
        int b;
        while(n--)
        {
            cin>>s>>b;
            if(b==1)
            {
                one[s]++;
                zero[s]++;
                zero[s]--;
            }
            else
            {
               zero[s]++;
                one[s]++;
                one[s]--;
            }
            
        }
        int ans=0;
        for(auto it = one.begin();it!=one.end();it++)
        {
            ans += max(one->second,zero->second);
        }
        cout<<ans<<endl;
    }
    return 0;
}