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
  vector<int> V(n+1),T(n+1),tsum(n+1,0);
  for(int i=1;i<=n;i++)
  {
      cin>>V[i];
  }
  for(int i=1;i<=n;i++)
  {
      cin>>T[i];
      tsum[i]=T[i]+tsum[i-1];
  }
  map<int,int> mp;
  vector<int> ans(n+1,0);

  for(int i=1;i<=n;i++)
  {
      int x = lower_bound(tsum.begin(),tsum.end(),V[i]+tsum[i-1])-tsum.begin();
      if(x<=n)
      {
          mp[x]+=min(V[i]+tsum[i-1]-tsum[x],0LL);
      }
      x = min(x,n);
      ans[x]++;
      ans[i-1]--;
  }

  for(int i=n-1;i>=0;i--)
  {
      ans[i]+=ans[i+1];
  }

  for(int i=1;i<=n;i++)
  {
      ans[i]*=T[i];
  }

  for(auto x:mp)
  {
    //   cout<<x.first<<" "<<x.second<<endl;
    //   cout<<endl;
      ans[x.first]+=x.second;
  }
  for(int i=1;i<=n;i++)
  cout<<ans[i]<<" ";
  return 0;
}
