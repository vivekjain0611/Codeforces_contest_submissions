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
      vector<int> a(n),b(n);
      for(auto &i:a) cin>>i;
      for(auto &i:b) cin>>i;
      sort(a.begin(),a.end());
      sort(b.begin(),b.end(),greater<int>());
      int take=0; 
      int ans=0;
      for(int i=0;i<n;i++)
      {
          if(take>=k)
          break;

          if(a[i]<b[i])
          {
              swap(a[i],b[i]);
              take++;
          }
          else if(a[i]>b[i])
          break;
      }

      for(auto &i:a) ans+=i;
      cout<<ans<<endl;
      
  }
  return 0;
}
