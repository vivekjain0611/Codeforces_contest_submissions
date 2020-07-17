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
  vector<int> v(n),p(n);
  for(auto &i:v) cin>>i;
  map<int,int> mp;
  for(int i=n-1;i>=0;i--)
  {
      if(mp.find(v[i]+1)==mp.end())
      {
          mp[v[i]]=1;
          p[i]=-1;
      }
      else
      {
          mp[v[i]]=
      }
      
  }
  return 0;
}
