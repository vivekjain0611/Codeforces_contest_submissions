#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
       vector<pair<int,int>> vec;
       int n,m;
       cin>>n>>m;
       int p[m];
       int check[n]={0};
       for(int i=0;i<n;i++)
       {
           int x;cin>>x;
           vec.push_back({x,i+1});
       } 
       for(int i=0;i<m;i++)
       {
           cin>>p[i];
           check[p[i]]=1;
       }

       bool ans=true;
       for(int i=1;i<n;i++)
       {
          check[i]+=check[i-1];
       }
       sort(vec.begin(),vec.end());
       for(int i=0;i<n;i++)
       {
            int e=vec[i].second;
            e--;
            int s = i+1;
            int have=check[e]-check[s-1];
            int req = e-s+1;
            if(req>have)
            {
                ans=false;
                break;
            }
       }
       if(ans)
       cout<<"YES\n";
       else
       {
           cout<<"NO\n";
       }
       

    }
    return 0;
}