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
      int n,k;
      cin>>n>>k;
      if(n<=k)
      cout<<"1\n";
      else
      {
        //   cout<<"Hi\n";
          int ans=INT_MIN;
          for(int i=1;i*i<=n;i++)
          {
                 if(n%i==0)
                 {
                     if(i<=k)
                     ans=max(ans,i);
                     if((n/i)<=k)
                     ans=max(ans,n/i);
                 }
          }
          cout<<n/ans<<endl;
      }
      
  }
  return 0;
}
