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
  while(t--){
  int n,k;
  string s;
  cin>>n>>k>>s;
  vector<int> pfx(n+2,0);
  for(int i=1;i<=n;i++)
  {
      pfx[i]=pfx[i-1]+s[i-1]-'0';
  }

  int ans = pfx[n];
  
  vector<int> dp(n+1);
  dp[0]=0;
  // dp[1]=0;
  
  for(int i=1;i<=n;i++)
  {
     dp[i]=pfx[i-1]+pfx[n]-pfx[i];
     if(i>=k)
     {
       dp[i]=min(dp[i],dp[i-k]);
     }
     dp[i]+=(s[i-1]=='0');
     ans = min(ans,dp[i]);
  }
  cout<<ans<<endl;
  }
}
