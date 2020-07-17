#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
#define int long long int
#define dbg(x) cout << '>' << #x << ':' << x << endl;
#define M 1000000007
vector<vector<int>> G(100001);
vector<int> V(100001);
vector<int> child(100001,0);
void dfs(int s)
{
   int sum = 0;
   V[s]=true;

   for(int i=0;i<G[s].size();i++)
   {
       if(!V[G[s][i]])
       {
           dfs(G[s][i]);
           sum+=child[G[s][i]];
           
       }

   }
   child[s]=sum+1;

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
  if(n&1)
  {
      cout<<"-1";
      return 0;
  }
  G.resize(n);
  V.resize(n);
  child.resize(n);
  for(int i=0;i<n-1;i++)
  {
      int x,y;
      cin>>x>>y;
      x--;y--;
      G[x].push_back(y);
      G[y].push_back(x);
  }

  dfs(0);
  int ans=0;
  for(int i=1;i<n;i++)
  {
      ans+=(child[i]%2==0);
  }
  
  cout<<ans<<endl;
  


  return 0;
}
