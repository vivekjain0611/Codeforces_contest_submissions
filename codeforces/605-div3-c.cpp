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
  string s;
  cin>>s;
  int present = 0;
  for(int i=0;i<k;i++)
  {
      char c;cin>>c;
      present = present|(1<<(c-'a'));
  }
  int ans=0;
  int dp[n+1]={0};
  for(int i=1;i<=n;i++)
  {
      if(present&(1<<(s[i-1]-'a')))
      {
          dp[i]=1+dp[i-1];
      }
      ans+=dp[i];
  }

  cout<<ans<<endl;

  return 0;
}
