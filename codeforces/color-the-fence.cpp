#include<bits/stdc++.h>
using namespace std;
//Memory Limit Exceeded
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
#define int long long int
#define dbg(x) cout << '>' << #x << ':' << x << endl;
#define M 1000000007
vector<int> v(9);
map<int,string> mp;
bool dp[1000001];
string solve(int n)
{
    if(n==0)
    {
        mp[0]="";
        return "";
    }

    if(mp.find(n)!=mp.end()) return mp[n];
    string s="";

    for(int i=9;i>=0;i--)
    {
        if(n-v[i]>=0)
        {
            string x = solve(n-v[i]);
            x+=('0'+i+1);
            if(x.size()>s.size())
            {
                s=x;
            }
        }
    }
    mp[n]=s;
    return s;
}
int32_t main()
{
  fastio
  #ifndef ONLINE_JUDGE
      freopen("F:\\cp\\input.txt","r",stdin);
      freopen("F:\\cp\\output.txt","w",stdout);
  #endif
  int n;
  cin>>n;
  for(int i=0;i<10;i++)cin>>v[i];
  string ans = solve(n);
  if(ans.size()==0)
  cout<<"-1";
  else
  {
      sort(ans.begin(),ans.end(),greater<int>());
      cout<<ans;
  }
  
}
