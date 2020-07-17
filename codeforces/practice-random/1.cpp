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
  int n;
  cin>>n;
  vector<int> v(n);
  for(auto &i:v)
  cin>>i;
  vector<int> v2;
  v2.push_back(0);
  int cnt=1;
  for(int i=1;i<n;i++)
  {
     if(v[i]==v[i-1])
     {
         cnt++;
     }
     else
     {
         v2.push_back(cnt);
         cnt=1;
     }
     
  }
  v2.push_back(cnt);
  v2.push_back(0);
  int ans=0;

  for(int i=0;i<v2.size()-1;i++)
  {
      ans = max(ans,2*min(v2[i],v2[i+1]));
  }
  cout<<ans<<endl;
  return 0;
}
