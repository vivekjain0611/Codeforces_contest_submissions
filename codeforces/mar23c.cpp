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
  int n,m,k;
  cin>>n>>m>>k;
  int ans = (n-1)+(m-1)+n*(m-1)+n-1;
  int x,y;
  for(int i=0;i<2*k;i++)
  cin>>x>>y;
  cout<<ans<<endl;
  for(int i=0;i<n-1;i++)
  cout<<"U";
  for(int i=0;i<m-1;i++)
  cout<<"L";
  for(int i=1;i<=n;i++)
  {
      if(i&1)
      {
          for(int j=0;j<m-1;j++)
          cout<<"R";
      }
      else
      {
          for(int j=0;j<m-1;j++)
          cout<<"L";
      }
      if(i<n)
      cout<<"D";
  }
  cout<<endl;
}
