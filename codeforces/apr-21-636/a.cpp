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
      int n,ans;
      cin>>n;
      for(int i=2;i<=30;i++)
      {
          int d = (1<<i)-1;
          if(d<=n&&n%d==0)
          {
              ans=n/d;
              break;
          }
      }
      cout<<ans<<endl;
  }

  return 0;
}
