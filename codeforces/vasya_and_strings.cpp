#include<bits/stdc++.h>
/*Learn to live and Live to learn*/
using namespace std;
#define int long long int
#define debug(x) cout << '>' << #x << ':' << x << endl;
#define M 1000000007
#define pb push_back
int32_t main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  #ifndef ONLINE_JUDGE
//   freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int n,k;
  cin>>n>>k;
  string s;
  cin>>s;
  vector<int> dp(n+1,0);
  for(int i=1;i<=n;i++)
  {
      dp[i]=dp[i-1]+s[i-1]-'a';
  }
  int ans = INT_MIN;
  vector<int>::iterator bgn = dp.begin();
  bgn++;
  for(int i=1;i<=n;i++)
  {
      int x = k+dp[i];
      int r = upper_bound(bgn,dp.end(),x)-bgn;
    //   cout<<r-i<<endl;
      ans = max(ans,r);
      bgn++;
  }
  
  for(int i=1;i<=n;i++)
  {
      dp[i]=i-dp[i];
  }
  bgn = dp.begin();
  bgn++;
  for(int i=1;i<=n;i++)
  {
      int x = k+dp[i];
      int r = upper_bound(bgn,dp.end(),x)-bgn;
    //   cout<<r-i<<endl;
      ans = max(ans,r);
      bgn++;
  }
  cout<<ans<<endl;
}
