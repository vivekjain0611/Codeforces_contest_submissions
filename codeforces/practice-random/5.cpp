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
  vector<int> a(n),b(n);
  
  for(int i=0;i<n;i++)
  {
      cin>>a[i]>>b[i];
  }
   
  int ans = min(a[0],b[0])+1;
  
  for(int i=1;i<n;i++)
  {
      ans += max(0LL,min(a[i],b[i])-max(a[i-1],b[i-1])+1);
      if(a[i-1]==b[i-1]) ans--;
  }

  cout<<ans;


  return 0;
}
