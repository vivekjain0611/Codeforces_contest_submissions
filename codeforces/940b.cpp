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
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
  #endif
  int n,k,a,b;
  cin>>n>>k>>a>>b;
  int ans=0;
  if(k==1)
  cout<<(n-1)*a;
  else
  {
      while(n!=1)
      {
          if(n%k)
          {
              if(n/k==0)
              {
                  ans+=(n-1)*a;
                  n=1;
              }
              else{
              ans+=(n%k)*a;
              n-=(n%k);}
          }
          else
          {
              int x = n-n/k;
              int p = x*a;
              if(p<b)
              {
                  ans+=p;
                  n=n/k;
              }
              else
              {
                  ans+=b;
                  n=n/k;
              }
              
          }
          
      }
      cout<<ans;
  }
  
  return 0;
}
