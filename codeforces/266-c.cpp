#include<bits/stdc++.h>
using namespace std;
// https://codeforces.com/problemset/problem/466/Cs
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
  vector<int> v(n),s;
  int sum=0;
  for(auto &i:v)cin>>i,sum+=i;
  int ans=0;
  if(sum%3)
  {
      ans=0;
  }
  else
  {
      sum/=3;
    //   dbg(sum);
      for(int i=1;i<n;i++)
      {
         v[i]+=v[i-1];
         if((v[i]==2*sum)&&(i!=n-1))
         s.push_back(i);
      }

    //   int ans=0;
      for(int i=0;i<n;i++)
      {
          if(v[i]==sum)
          {
              ans+=(s.end()-upper_bound(s.begin(),s.end(),i));
          }
      }
  }
  cout<<ans<<endl;
  
  return 0;
}
