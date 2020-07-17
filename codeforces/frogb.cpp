#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        int ans=INT_MIN;
        int rpos=0;
        for(int i=1;i<=s.size();i++)
        {
            if(s[i-1]=='R')
            {
                ans = max(ans,i-rpos);
                rpos = i;
            }
        }
        ans = max(ans,s.size()+1-rpos);
        cout<<ans<<endl;
    }
}