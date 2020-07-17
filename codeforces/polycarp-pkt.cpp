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
  int n;
  cin>>n;
  map<int,int> mp;
  for(int i=0;i<n;i++)
  {
      int x;
      cin>>x;
      mp[x]++;
  }
  int ans=1;
  for(auto i:mp)
  {
      ans=max(i.second,ans);
  }
  cout<<ans;
}
