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
  vector<int> vec(n+1);
  for(int i=1;i<=n;i++)
  {
    cin>>vec[i];
  }

  int X=0;
  map<int,int> even,odd;

  even[0]=1;
  int ans = 0;
  for(int i=1;i<=n;i++)
  {
    X^=vec[i];
    if(i&1)
    {
      ans+=odd[X];
      odd[X]++;
    }
    else
    {
      ans+=even[X];
      even[X]++;
    }
    
  }

  cout<<ans<<endl;

  

  
  
  return 0;
}
