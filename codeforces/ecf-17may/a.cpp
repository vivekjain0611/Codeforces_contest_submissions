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
      int a,b,c,d;
      cin>>a>>b>>c>>d;
      if(b>=a)
      {
          cout<<b<<endl;
      }
      else
      {
          int need = a-b;
          int interval = c-d;
          if(c-d<=0)
          {
              cout<<"-1\n";
          }
          else
          {
              int ans = b+((need+interval-1)/interval)*c;
              cout<<ans<<endl;
          }
          
      }
  }
  return 0;
}
