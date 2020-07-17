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
  int n;
  cin>>n;
  vector<int> v(n+2),e(n+2,0),s(n+2,0);
  v[0]=INT_MIN;
  v[n+1]=INT_MAX;
  for(int i=1;i<=n;i++)
  cin>>v[i];
  
  for(int i=1;i<=n;i++)
  {
    if(v[i]>v[i-1])
    {
        e[i]=e[i-1]+1;
    }
    else
    {
        e[i]=1;
    }
  }

  for(int i=n;i>=1;i--)
  {
      if(v[i]<v[i+1])
      {
          s[i]=1+s[i+1];
      }
      else
      {
          s[i]=1;
      }
  }

  int ans = INT_MIN;

  for(int i=1;i<=n;i++)
  {
      int exc;
      if(v[i+1]>v[i-1])
      {
          exc = e[i-1]+s[i+1];
      }
      else
      {
          exc = max(e[i-1],s[i+1]);
      }

      ans = max(ans,max(exc,e[i]+s[i]-1));
      
  }
  cout<<ans<<endl;

  return 0;
}
