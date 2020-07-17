#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
#define int long long int
#define dbg(x) cout << '>' << #x << ':' << x << endl;
#define M 1000000007
vector<int> T[50001];
vector<int> ans(50001);
void dfs(int s,int p)
{
    ans[s]=p;

    for(auto c:T[s])
    {
        if(c!=p)
        {
            dfs(c,s);
        }
    }
}
int32_t main()
{
  fastio
  #ifndef ONLINE_JUDGE
      freopen("F:\\cp\\input.txt","r",stdin);
      freopen("F:\\cp\\output.txt","w",stdout);
  #endif
  int n,r1,r2;
  cin>>n>>r1>>r2;
  for(int i=1;i<=n;i++)
  {
      if(i==r1) continue;
      int x;
      cin>>x;
      T[x].push_back(i);
      T[i].push_back(x);
  }
  dfs(r2,-1);

  for(int i=1;i<=n;i++)
  {
      if(i==r2) continue;
      cout<<ans[i]<<" ";
  }
  

  return 0;
}
