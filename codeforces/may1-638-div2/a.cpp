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
      int x = n/2;
      int sum1 = (1<<n);

      for(int i=1;i<=x-1;i++)
      {
          sum1+=(1<<i);
      }
      for(int i=x;i<n;i++)
      {
          sum1-=(1<<i);
      }
      cout<<sum1<<endl;
  }
  return 0;
}
