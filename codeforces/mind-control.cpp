#include<bits/stdc++.h>
using namespace std;
//wrong ans
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
#define int long long int
#define dbg(x) cout << '>' << #x << ':' << x << endl;
#define M 1000000007
int solve(vector<int> &a,int k)
{
    int l=0,h=a.size()-1;
    int r = 0;
    while(r<k)
    {
        if(a[l]<a[h])
        l++;
        else h--;
        r++;
    }

    int ans = INT_MAX;
    for(int i=l;i<=h;i++)
    {
        ans = min(ans,a[l]);
    }
    return ans;
}
int32_t main()

{
  fastio
  #ifndef ONLINE_JUDGE
      freopen("F:\\cp\\input.txt","r",stdin);
      freopen("F:\\cp\\output.txt","w",stdout);
  #endif
  int T;
  cin>>T;
  while(T--)
  {
      int n,m,k;
      cin>>n>>m>>k;
      k = min(k,m-1);
      vector<int> a(n);
      for(auto &i:a)
      cin>>i;
      int ans = INT64_MIN;

      for(int i=0;i<=k;i++)
      {
          int tmp = solve(a,i);
          ans = max(tmp,ans);
      }
      cout<<ans<<endl;
  }
  return 0;
}
