#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
#define int long long int
#define dbg(x) cout << '>' << #x << ':' << x << endl;
#define M 1000000007
int dp[101][2];
int n,k,d;

int32_t main()
{
  fastio
  #ifndef ONLINE_JUDGE
      freopen("F:\\cp\\input.txt","r",stdin);
      freopen("F:\\cp\\output.txt","w",stdout);
  #endif
  cin>>n>>k>>d;
  
  dp[0][0]=0;
  dp[0][1]=1;

  for(int i=1;i<=n;i++)
  {
      for(int j=1;j<=min(i,k);j++)
      {
          dp[i][0] += dp[i-j][1]%M;
          dp[i][0]%=M;

          
      }
  }

  return 0;
}
