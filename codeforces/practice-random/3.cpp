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
  int n,m;
  cin>>n>>m;
  vector<int> v(n);
  for(int i=0;i<n;i++)
  {
      cin>>v[i];
  }
  sort(v.begin(),v.end());
  int sum = 0;
  for(int i=0;i<m&&v[i]<0;i++)
  {
      sum+=v[i];
  }
    cout<<-1*sum<<endl;
  return 0;
}
