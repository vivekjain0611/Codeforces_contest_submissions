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
  int k;
  cin>>k;
  string s;
  cin>>s;
  map<int,int> mp;
  mp[0]=1;
  int sum=0,ans=0;
  for(int i=0;i<s.size();i++)
  {
     sum+=(s[i]-'0');
     ans+=mp[sum-k];
     mp[sum]++; 
  }
  cout<<ans<<endl;
  return 0;
}
