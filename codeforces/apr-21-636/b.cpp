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
      if(x&1)
      cout<<"NO\n";
      else
      {
          cout<<"YES\n";
          int sum = n+2;

          for(int i=2;i<sum/2;i+=2)
          {
              cout<<i<<" "<<sum-i<<" ";
          }
          
          for(int i=1;i<sum/2;i+=2)
          {
              cout<<i<<" "<<sum-i<<" ";
          }
          cout<<endl;
      }
      
  }
  return 0;
}
