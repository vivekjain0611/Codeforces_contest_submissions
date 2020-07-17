#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
#define int long long int
#define dbg(x) cout << '>' << #x << ':' << x << endl;
#define M 1000000007
int32_t main()
{
  fastio
  #ifndef ONLINE_JUDGE
      freopen("F:\\cp\\input.txt","r",stdin);
      freopen("F:\\cp\\output.txt","w",stdout);
  #endif
  int t;
  cin>>t;
  while(t--)
  {
      int n;
      cin>>n;
      vector<int> v(n);
      for(auto &i:v)cin>>i;
      int nmax=INT64_MIN,pmax=0;
      int psign = 0,ans=0;
      for(int i=0;i<n;i++)
      {
          if(v[i]>0)
          {
              if(psign==-1)
              {
                  pmax = v[i];
                  ans+=nmax;
                  nmax=INT64_MIN;
              }
              else
              {
                  pmax=max(pmax,v[i]);
              }
              psign = 1;
          }
          else
          {
              if(psign==1)
              {
                  nmax = v[i];
                  ans+=pmax;
                  pmax=0;
              }
              else
              {
                  nmax = max(nmax,v[i]);
              }
              psign = -1;
              
          }


          
      }

      if(psign==-1)
      ans+=nmax;
      else if(psign==1) ans+=pmax;
      cout<<ans<<endl;
    
  }
  return 0;
}
