#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
#define int long long int
#define dbg(x) cout << '>' << #x << ':' << x << endl;
#define M 1000000007
#define PI 3.141592653589793238462643383279
int32_t main()
{
  fastio
  #ifndef ONLINE_JUDGE
      freopen("F:\\cp\\input.txt","r",stdin);
      freopen("F:\\cp\\output.txt","w",stdout);
  #endif
  int T;
  cin>>T;
  while(T--)
  {
      int N;
      cin>>N;
      double angle = PI/(2*N);
      double sval = sin(angle);
      double cval = cos(angle);
      double ans = (cval/sval);
      cout << fixed << setprecision(9) << ans <<endl; 
  }
  return 0;
}
