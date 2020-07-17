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
      vector<int> v(n+1),dp(n+1,0);
      for(int i=1;i<=n;i++)
      {
          cin>>v[i];
      }
      dp[1]=1;
      int ans=1;
      for(int i=2;i<=n;i++)
      {
          int x=0;
          if(v[i]>v[1]) x++;

          for(int j=2;j*j<=i;j++)
          {
              if(i%j==0)
              {
                  if(v[j]<v[i]) x=max(x,dp[j]);
                  if(v[i/j]<v[i]) x=max(x,dp[i/j]);
              }
          }

          dp[i]= ++x;
          ans=max(ans,dp[i]);
      }
      cout<<ans<<endl;
  }
  return 0;
}
