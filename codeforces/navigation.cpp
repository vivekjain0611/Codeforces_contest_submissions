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
  vector<int> b(n/2);
  for(auto &i:b)
  {
      cin>>i;
  }
  vector<int> ans1(n/2),ans2(n/2);
  ans1[0]=0;
  ans2[0]=b[0];
  int a = ans1[0];
  int b = ans2[0];
  for(int i=1;i<n/2;i++)
  {
      int x = 0,y = b[i];
      
  }
  for(int i=0;i<n/2;i++)cout<<ans1[i]<<" ";
  for(int i=n/2-1;i>=0;i--)cout<<ans2[i]<<" ";

  return 0;
}
