#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define debug(x) cout << '>' << #x << ':' << x << endl;
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
  int T;
  cin>>T;
  while(T--)
  {
      int n,x;
      cin>>n>>x;
      vector<int> v(n);
      for(int &i:v)
      cin>>i;
      sort(v.begin(),v.end(),greater<int>());
      for(int i=1;i<n;i++)
      v[i]+=v[i-1];

      int ans=0;
      for(int i=0;i<n;i++)
      {
          if((v[i]/(i+1))>=x)
          {
              ans=i+1;
          }
      }
      cout<<ans<<endl;
  }
}
