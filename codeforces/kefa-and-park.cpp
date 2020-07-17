#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
#define int long long int
#define dbg(x) cout << '>' << #x << ':' << x << endl;
#define M 1000000007
int ans,m,n;
vector<vector<int>> T(100001,vector<int>());
vector<bool> vis(100001,false);
vector<int> cat(100001);
void dfs(int s,int sum,int pmax)
{
    vis[s]=true; 
    
    if(cat[s]==1)
    {
        sum++;
    }
    else
    {
        pmax=max(pmax,sum);
        sum=0;
    }

    if(s!=0&&T[s].size()==1)
    {
        pmax=max(pmax,sum);
        if(pmax<=m)
        ans++;
    }

    for(auto i:T[s])
    {
        if(!vis[i])
        dfs(i,sum,pmax);
    }
    
}
int32_t main()
{
  fastio
  #ifndef ONLINE_JUDGE
      freopen("F:\\cp\\input.txt","r",stdin);
      freopen("F:\\cp\\output.txt","w",stdout);
  #endif
//   int n,m;
  cin>>n>>m;
  ans=0;
  T.resize(n);
  cat.resize(n);
  vis.resize(n);
  for(auto &i:cat)cin>>i;
  for(int i=0;i<n-1;i++)
  {
      int x,y;
      cin>>x>>y;
      x--;y--;
      T[x].push_back(y);
      T[y].push_back(x);
  }
  dfs(0,0,0);
  cout<<ans;
  return 0;
}
