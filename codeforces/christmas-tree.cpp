#include<bits/stdc++.h>
using namespace std;
//multisourced bfs
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
  int n,m;
  cin>>n>>m;
  vector<int> x(n);
  queue<int> q;
  for(auto &i:x)cin>>i;
  map<int,int> dis;
  for(auto i:x)
  {
     q.push(i);
     dis[i]=0;
  }
  int tot=0;
  vector<int> ans;
  while(!q.empty())
  {
      if(ans.size()==m)
      break;

      int v = q.front();
      q.pop();

      if(dis[v]!=0)
      {
         ans.push_back(v);
         tot+=dis[v];
      }

      if(dis.find(v-1)==dis.end())
      {
          q.push(v-1);
          dis[v-1]=dis[v]+1;
      }

      if(dis.find(v+1)==dis.end())
      {
          q.push(v+1);
          dis[v+1] = dis[v]+1;
      }
  }
  cout<<tot<<endl;
  for(auto i:ans)cout<<i<<" ";
  return 0;
}
