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
  int i=1;
  map<int,int> mp;
  while(i<=n)
  {
      int x;
      cin>>x;
      mp[x]=i;
      i++;
  }
  if(mp.size()>=k)
  {
      cout<<"YES\n";
      int j=0;
      for(auto x:mp)
      {
          cout<<x.second<<" ";
          j++;
          if(j==k)
          break;
      }
  }
  else cout<<"NO\n";
  return 0;
}
