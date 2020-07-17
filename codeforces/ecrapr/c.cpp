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
      int a,b,q;
      cin>>a>>b>>q;
      int mx = max(a,b);
      int LCM = (a*b)/__gcd(a,b);
      vector<int> ans;
      while(q--)
      {
        int l,r;
        cin>>l>>r;
        int p=0,q=0;
        p+=(r/LCM)*mx;

        p+=(min(r%LCM,mx-1));
        int z = l-1;
        q+=(z/LCM)*mx;
        q+=(min(z%LCM,mx-1));
        ans.push_back(r-l+1-p+q);

      }
      for(auto a:ans)
      cout<<a<<" ";
      cout<<endl;
  }
  return 0;
}
