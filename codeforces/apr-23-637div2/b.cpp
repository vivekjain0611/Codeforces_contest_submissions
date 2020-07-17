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
      vector<int> v(n),p(n,0);
      for(auto &i:v)cin>>i;
      
      for(int i=1;i<n-1;i++)
      {
          if(v[i]>v[i-1]&&v[i]>v[i+1])
          {
              p[i]=1;
          }
         
      }

      for(int i=1;i<n;i++)
      {
          p[i]+=p[i-1];
      }

      int ans = p[k-2]-p[0];
      int l = 0;
      int j=1;
      for(int i=k-1;i<n-1;i++)
      {
          int x = p[i]-p[j];
          if(x>ans)
          {
              ans=x;
              l=j;
          }
          j++;
      }
      cout<<ans+1<<" "<<l+1<<endl;
  }
  return 0;
}
