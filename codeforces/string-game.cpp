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
  string t,p;
  cin>>t>>p;
  map<int,int> look;
  for(int i=0;i<t.size();i++)
  {
      int x;
      cin>>x;
      look[x-1]=i;
  }
  map<char,vector<int>> mp;
  for(int i=0;i<t.size();i++)
  {
      mp[t[i]-'a'].push_back(i);
  }
  vector<int> F;
  F = mp[p[0]-'a'];
  int ans = -1;
  bool flag = true;
  for(int i=0;i<F.size();i++)
  {
      int L = look[F[i]];
      if(L<=ans)continue;

      int prv = F[i];

      for(int j=1;j<p.size();j++)
      {
          vector<int>::iterator it;
          it = upper_bound(mp[p[j]-'a'].begin(),mp[p[j]-'a'].end(),prv);
          if(it==mp[p[j]-'a'].end())
          {
              flag=false;
              break;
          }
          else
          {
              int y = look[(*it)];
              L = min(y,L);
          }
          prv = (*it);
      }
      if(!flag) break;
      else ans = max(ans,L);
  }
   cout<<ans<<endl;
  return 0;
}
