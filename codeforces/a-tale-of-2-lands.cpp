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
  vector<int> pos;
  for(int i=0;i<n;i++)
  {
      int x;
      cin>>x;
      if(x>=0)
      pos.push_back(x);
      else pos.push_back(-1*x);
  }

  sort(pos.begin(),pos.end());
  int ans=0;
  
  for(auto it=pos.begin();it!=pos.end();it++)
  {
      int x = upper_bound(it,pos.end(),2*(*it))-it;
      x--;
      ans+=max(x,0LL);
  }


  
  cout<<ans<<endl;

  return 0;
}
