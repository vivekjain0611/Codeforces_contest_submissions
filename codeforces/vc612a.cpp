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
      int n;
      cin>>n;
      string s;
      cin>>s;
      int i;
      for(i=0;i<n;i++)
      {
          if(s[i]=='A')
          break;
      }
      int ans=0;
      int cnt=0;
      for(int x=i+1;x<n;x++)
      {
          if(s[x]=='P')
          cnt++;
          else
          {
              ans=max(ans,cnt);
              cnt=0;
          }
          
      }
      ans=max(ans,cnt);
      cout<<ans<<endl;
  }
}
