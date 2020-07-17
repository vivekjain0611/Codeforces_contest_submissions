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
      int n;
      cin>>n;
      vector<int> v(n);
      for(auto &i:v)
      cin>>i;
      int sum = 0;
      bool ok = true;

      for(auto i:v)
      {
          sum+=i;
          if(sum<=0)
          {
              ok = false;
              break;
          }
      }
      if(ok)
      {
          int sum=0;
          for(int i=n-1;i>=0;i--)
          {
              sum+=v[i];
              if(sum<=0)
              {
                  ok = false;
                  break;
              }
          }
      }
      if(ok) cout<<"YES\n";
      else cout<<"NO\n";
  }
  return 0;
}
