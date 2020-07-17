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
      int n,a,b,c,d;
      cin>>n>>a>>b>>c>>d;
      int l1,r1,l2,r2;
      l1 = (a-b)*n;
      r1 = (a+b)*n;
      l2 = c-d;
      r2 = c+d;
      int x = min(r1,r2);
      int y = max(l1,l2);
      if(y<=x)
      cout<<"Yes\n";
      else cout<<"No\n";
  }
  return 0;
}
