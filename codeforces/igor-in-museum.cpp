#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
#define int long long int
#define dbg(x) cout << '>' << #x << ':' << x << endl;
#define M 1000000007
vector<string> G(1001);
bool vis[1001][1001];
int n,m,k;
int dx[]={0,-1,0,1};
int dy[]={-1,0,1,0};
void dfs(int sx,int sy,int &cnt,vector<pair<int,int>> &p)
{
   if(sx<0||sx>=n||sy<0||sy>=m)
   return;
   if(vis[sx][sy])
   return;
   if(G[sx][sy]=='*')
   {cnt++;return;}

   vis[sx][sy]=true;
   p.push_back({sx,sy});
   for(int i=0;i<4;i++)
   {
       dfs(sx+dx[i],sy+dy[i],cnt,p);
   }

}
int32_t main()
{
  fastio
  #ifndef ONLINE_JUDGE
      freopen("F:\\cp\\input.txt","r",stdin);
      freopen("F:\\cp\\output.txt","w",stdout);
  #endif
//   int n,m,k;
  cin>>n>>m>>k;
  for(int i=0;i<n;i++)
  {
      cin>>G[i];
  }
  map<int,int> mp;
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<m;j++)
      {
          vector<pair<int,int>> p;
          int cnt=0;
          if(!vis[i][j])
          { dfs(i,j,cnt,p);
            for(int q=0;q<p.size();q++)
            {
                int f = p[q].first;
                int s = p[q].second;
                mp[f*m+s]=cnt;
            }
            p.clear();
          }
          

      }
  }

  for(int i=0;i<k;i++)
  {
      int c,d;
      cin>>c>>d;
      c--;d--;
      cout<<mp[c*m+d]<<endl;
  }
  return 0;
}
