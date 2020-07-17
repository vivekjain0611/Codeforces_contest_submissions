#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define M 1000000007
#define pb push_back
bool solve()
{
      int n;
      cin>>n;
      vector<int> V(n);
      for(auto &i:V) i;
      int sum=0; 
      for(int i=0;i<n-1;i++)
      {
          sum+=V[i];
          if(sum<0)
          {
               return false;
          }
      }
      sum = 0;
      for(int i=n-1;i>=0;i--)
      {
          sum+=V[i];
          if(sum<0)
          {
              return false;
          }
      }
      return true;
}

int32_t main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int T;
  cin>>T;
  while(T--)
  {
      if(solve())cout<<"YES\n";
      else cout<<"NO\n";
  }
  
  
}
