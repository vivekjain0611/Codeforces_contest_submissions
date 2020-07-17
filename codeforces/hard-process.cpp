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
  int n,k;
  cin>>n>>k;
  vector<int> v(n),dp(n);
  for(auto &i:v)cin>>i;
  dp[0]=1-v[0];
  for(int i=1;i<n;i++)
  {
      dp[i]=dp[i-1];
      if(v[i]==0)dp[i]++;
  }
  
  int h=INT_MIN,l=INT_MAX,ans=0;

  for(int i=0;i<n;i++)
  {
      int q = dp[i]+k+v[i]-1;
      int j = lower_bound(dp.begin(),dp.end(),q+1)-dp.begin();
      j--;
      if(j-i+1>ans)
      {
          ans = j-i+1;
          l=i;
          h=j;
      }
  }
//   dbg(l);dbg(h);
  cout<<ans<<endl;
  for(int i=0;i<n;i++)
  {
      if(i<l||i>h)
      cout<<v[i]<<" ";
      else cout<<"1 ";
  }
  return 0;
}
