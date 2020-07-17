#include<bits/stdc++.h>
using namespace std;
/* ***********************VIVEK JAIN**************************/
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
#define int long long int
#define dbg(x) cout << '>' << #x << ':' << x << endl;
#define M 1000000007
vector<int> G[1001];
vector<int> vis(1001,0);
void dfs(int s,int &nv,int &e)
{
    nv++;
    vis[s]=1;
    for(auto p:G[s])
    {
        if(!vis[p])
        {
            e++;
            dfs(p,nv,e);
        }
    }
}
int32_t main()
{
  fastio
  #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
  #endif
  int n,m,k;
  cin>>n>>m>>k;
  vector<int> v(k);
  for(int i=0;i<k;i++)
  {
      cin>>v[i];
      v[i]--;
  }
  for(int i=0;i<m;i++)
  {
      int x,y;
      cin>>x>>y;
      x--;
      y--;
      G[x].push_back(y);
      G[y].push_back(x);
  }
  int maxv=INT_MIN,medges=0;
  for(int s:v)
  {
      int nv=0,e=0;
      dfs(s,nv,e);
      
      if(nv>maxv)
      {
          maxv = nv;
          medges = e;
      }
  }

int pvcnt = 0;
int addedge=0;
// dbg(maxv);
for(int i=0;i<n;i++)
{
    int nv=0,e=0;
    if(!vis[i])
    {
        dfs(i,nv,e);
    }
    int x;
    x = pvcnt*nv;
    // dbg(addedge);
    addedge+=x;
    pvcnt+=nv;
}
dbg(medges);
int ans = maxv*pvcnt+addedge+(maxv*(maxv-1)/2)-medges;
cout<<ans<<endl;
  
  return 0;
}
