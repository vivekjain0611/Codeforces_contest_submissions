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
      int a,b;
      cin>>a>>b;
      if(a<b) swap(a,b);
      if(a>=2*b)
      {
          cout<<a*a<<endl;
      }
      else
      {
          cout<<4*b*b<<endl;
      }
      
  }
  return 0;
}
