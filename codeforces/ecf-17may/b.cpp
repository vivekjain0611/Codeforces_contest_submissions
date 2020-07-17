#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
#define int long long int
#define dbg(x) cout << '>' << #x << ':' << x << endl;
#define M 1000000007
int solve(vector<int> &a,vector<int> &b,vector<int> &c)
{
    int ans = INT64_MAX;
    for(int i=0;i<a.size();i++)
    {
        int j = lower_bound(b.begin(),b.end(),a[i])-b.begin();
        if(j<b.size())
        {
            int k = lower_bound(c.begin(),c.end(),b[j])-c.begin();
            if(k<c.size())
            {
                ans = min(ans,c[k]-a[i]+1);
            }
        }
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
  int t;
  cin>>t;
  while(t--)
  {
      string s;
      cin>>s;
      vector<int> one,two,three;
      for(int i=0;i<s.size();i++)
      {
          if(s[i]=='1')one.push_back(i);
          else if(s[i]=='2') two.push_back(i);
          else three.push_back(i);
      }
      int ans=INT64_MAX;
       ans = min(ans,solve(one,two,three));
       ans = min(ans,solve(one,three,two));
       ans = min(ans,solve(two,one,three));
       ans = min(ans,solve(two,three,one));
       ans = min(ans,solve(three,one,two));
       ans = min(ans,solve(three,two,one));

            if(ans==INT64_MAX)
            ans=0;
            cout<<ans<<endl;
      

  }
  return 0;
}
