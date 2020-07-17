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
  int b[3];
  cin>>b[0]>>b[1]>>b[2];
  sort(b,b+3);
  int ans = b[0];
  b[1]-=b[0];
  b[2]-=b[0];
  ans+=min(b[1]/2,b[2]);
  b[2]-=(b[1]/2);
  if(b[1]&1) {ans+=(b[2]>=2);};
  cout<<ans<<endl;

  return 0;
}
