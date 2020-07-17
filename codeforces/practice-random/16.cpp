#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
#define int long long int
#define dbg(x) cout << '>' << #x << ':' << x << endl;
#define M 1000000007
// *************************************************************************** //
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
      vector<int> v(n+1,0);
      map<int,int> mp;
      unordered_set<int> s;
      for(int i=1;i<=n;i++)
      {
          int x;
          cin>>x;
          mp[x]++;
          v[i]=v[i-1]+x;
      }
      int ans=0;
      for(int i=2;i<=n;i++)
      {
          for(int j=0;j<=i-2;j++)
          {
              if(v[i]-v[j]>n) continue;
              s.insert(v[i]-v[j]);
          }
      }
      v.clear();
      for(auto it:s)
      {
          ans+=mp[it];
      }
      cout<<ans<<endl;
  }
  return 0;
}
