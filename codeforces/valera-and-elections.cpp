#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
#define int long long int
#define dbg(x) cout << '>' << #x << ':' << x << endl;
#define M 1000000007
set<int> s;
vector<pair<int,int>> G[100001];
bool dfs(pair<int,int> s,int p=-1)
{
      for(auto x:G[s.first])
      [
          if(x.first!=p)
          {
              flag|=dfs(x,s.first);
              
          }
      ]
}
int32_t main()
{
  fastio
  #ifndef ONLINE_JUDGE
      freopen("F:\\cp\\input.txt","r",stdin);
      freopen("F:\\cp\\output.txt","w",stdout);
  #endif
  int n;
  cin>>n;
  for(int i=0;i<n-1;i++)
  {
      int x,y,t;
      cin>>x>>y>>t;
      x--;y--;
      G[x].push_back({y,t});
      G[y].push_back({x,t});
  }
  int last=0;
  dfs({0,0},last);
  cout<<s.size()<<endl;
  for(auto it:s)
  {
      cout<<it+1<<" ";
  }

  return 0;
}
