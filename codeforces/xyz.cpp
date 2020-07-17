#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
#define int long long int
#define dbg(x) cout << '>' << #x << ':' << x << endl;
#define M 1000000007
int n,k;
vector<int> G[200005];
bool V[200005];
void dfs(int s,vector<int> &child)
{
   int sum = 1;
   V[s]=true;

   for(int i=0;i<G[s].size();i++)
   {
       if(!V[G[s][i]])
       {
           dfs(G[s][i],child);
           sum+=child[G[s][i]];
           
       }

   }
   child[s]=sum;

}
int32_t main()
{
  fastio
  #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
  #endif
//   int n,k;
  cin>>n>>k;
//   vector<int> G[n];
  for(int i=0;i<n-1;i++)
  {
      int x,y;
      cin>>x>>y;
      x--;
      y--;
      G[x].push_back(y);
      G[y].push_back(x);
  }
  int dis[n],vis[n]={0};
  dis[0]=0;
  queue<int> q;
  q.push(0);
  vis[0]=1;
  while(!q.empty())
  {
      int p = q.front();q.pop();
      for(int i=0;i<G[p].size();i++)
      {
          if(vis[G[p][i]]==0){
          dis[G[p][i]]=dis[p]+1;
          q.push(G[p][i]);
          vis[G[p][i]]=1;}
      }
  }
  
  vector<int> child(n);
  memset(V,false,sizeof(V));
  dfs(0,child);
//   memset(V,false,sizeof(V));
//   for(int i=0;i<n;i++)
//   {
//       cout<<child[i]<<" ";
//   }
  for(int i=0;i<n;i++)
  {
      dis[i]-=child[i];
  }
  dis[0]+=1;
  sort(dis,dis+n,greater<int>());
  int ans=0;
  for(int i=0;i<k;i++)
  ans+=dis[i];
  cout<<ans;
  return 0;
}
