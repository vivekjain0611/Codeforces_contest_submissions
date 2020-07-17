#include<bits/stdc++.h>
using namespace std;
// https://codeforces.com/contest/295/problem/B
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

  int adj[n][n];

  for(int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++)
      {
          cin>>adj[i][j];
      }
  }
  vector<int> v(n);
  for(int i=0;i<n;i++)
  {
      cin>>v[i];
      v[i]--;
  }

  reverse(v.begin(),v.end());
  

  int G[n][n];
  
  
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++)
      {
          G[i][j] = adj[v[i]][v[j]];
      }
  }
  vector<int> ans;
  //floyd warshall algorithm
  for(int k=0;k<n;k++)
  {
      for(int i=0;i<n;i++)
      {
          for(int j=0;j<n;j++)
          {
              G[i][j] = min(G[i][j], G[i][k] + G[k][j]); 
          }
      }
      int s = 0;
      for(int q=0;q<=k;q++)
      {
          for(int r=0;r<=k;r++)
          {
              s+=G[q][r];
          }
      }
      ans.push_back(s);
  }
  reverse(ans.begin(),ans.end());
  for(auto &i:ans)
  cout<<i<<" ";
  return 0;
}
