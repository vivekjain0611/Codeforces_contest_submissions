#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
#define int long long int
#define dbg(x) cout << '>' << #x << ':' << x << endl;
#define M 1000000007
int n,m,k,s,p;
vector<string> G(500);
void dfs(int sx,int sy)
{
    if(sx<0||sy<0||sx>=n||sy>=m||G[sx][sy]!='.'||p>=k)
    return;
    
    G[sx][sy]='!';
    p++;
    
    dfs(sx-1,sy);
    dfs(sx+1,sy);
    dfs(sx,sy-1);
    dfs(sx,sy+1);
}

int32_t main()
{
  fastio
  #ifndef ONLINE_JUDGE
      freopen("F:\\cp\\input.txt","r",stdin);
      freopen("F:\\cp\\output.txt","w",stdout);
  #endif
  cin>>n>>m>>k;
  for(int i=0;i<n;i++)
  {
      cin>>G[i];
      for(int j=0;j<m;j++)
      {
          if(G[i][j]=='.')
          {
              s++;
          }
      }
  }
  k=s-k;
  bool flag=false;
  for(int i=0;i<n;i++)
  {

      for(int j=0;j<m;j++)
      {
          if(G[i][j]=='.')
          {
            //   ;
              dfs(i,j);flag-true;
              break;
              
          }
      }
      if(flag)break;
  }
  
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<m;j++)
      {
          if(G[i][j]=='!') G[i][j]='.';
          else if(G[i][j]=='.') G[i][j]='X';
      }
  }

  for(int i=0;i<n;i++)
  {
      cout<<G[i]<<"\n";
  }
  return 0;
}
