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
        int temp = n;
        vector<int> v;
        while(temp)
        {
            v.push_back(temp%10);
            temp/=10;
        }
        //reverse(v.begin(),v.end());
        int x = 1;
        for(int i=0;i<(int)v.size();i++)
        {
            v[i]*=x;
            x*=10;
        }
        reverse(v.begin(),v.end());
        int ans = INT_MAX;
        
         for(int i=1;i<(int)v.size();i++)
         {
             v[i]+=v[i-1];
         }
         int s = v.size();
         int prev = 0;
         int next = 0;
         for(int i=0;i<s;i++)
         {
             if(i)
             prev = v[i-1]/10;

             if(i==s-1)
             next = 0;
             else
             {
                 next = v[s-1]-v[i];
             }
             int num = prev+num;
             ans = min(num,ans);
             
         }
         cout<<ans<<endl;
    }
    return 0;
}