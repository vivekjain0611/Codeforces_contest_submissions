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
      int n;
      cin>>n;
      vector<int> v(n);
      for(auto &i:v) cin>>i;
      int ans=INT_MAX;
      for(int i=0;i<n;i++)
      {
          for(int j=i+1;j<n;j++)
          {
              ans=min(ans,abs(v[i]-v[j]));
          }
      }
      cout<<ans<<endl;
  }
  return 0;
}
