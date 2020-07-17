#include<bits/stdc++.h>
using namespace std;

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
  int t;
  cin>>t;
  while(t--)
  {
      int n,m;
      cin>>n>>m;
      vector<string> v(n);
      for(auto &s:v) cin>>s;
      int chk[n]={0};
      for(int i=0;i<m;i++)
      {
          set<char> s;
          for(int j=0;j<n;j++)
          {
              s.insert(v[i][j]);
          }
          chk[i]=s.size();
      }
      string ans="";
      
  }
  return 0;
}
