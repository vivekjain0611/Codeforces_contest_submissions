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
  for(int i=0;i<n;i++)
  cin>>v[i];

  int ans = n-1;
  int diff = abs(v[0]-v[n-1]);

  for(int i=0;i<n-1;i++)
  {
      if(diff>abs(v[i]-v[i+1]))
      {
          diff = abs(v[i]-v[i+1]);
          ans = i;
      }
  }

  int a = ans;
  int b = (ans+1)%n;

  cout<<a+1<<" "<<b+1<<endl;

  return 0;
}
