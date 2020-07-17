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
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
  #endif
  int t;
  cin>>t;
  while(t--)
  {
      int x,n,m;
      cin>>x>>n>>m;
      while(x>0&&(n>0||m>0))
      {
          if(n==0&&m>0)
          {
              x-=10;
              m--;
          }
          else if(m==0&&n>0)
          {
              x=x/2+10;
              n--;
          }
          else if((x+1)/2>10)
          {
              x=x/2+10;
              n--;
          }
          else
          {
              x-=10;
              m--;
          }
          
      }
      if(x<=0)cout<<"YES\n";
      else cout<<"NO\n";
  }
  return 0;
}
