#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define M 1000000007
#define pb push_back
int32_t main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int t;
  cin>>t;
  while(t--)
  {
      int n,k;
      cin>>n>>k;
      int a=n%2,b=k%2;
      if(a!=b)
      cout<<"NO\n";
      else
      {
          int s = k*k;
          if(n>=s)
          cout<<"YES\n";
          else
          {
              cout<<"NO\n";
          }
          
      }
      
  }
}