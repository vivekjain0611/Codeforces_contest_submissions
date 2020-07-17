#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define debug(x) cout << '>' << #x << ':' << x << endl;
#define M 1000000007
#define pb push_back
int32_t main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int T;
  cin>>T;
  while(T--)
  {
      int n;
      cin>>n;
      vector<pair<int,int>> v(n);
      for(auto &i:v)
      cin>>i.first>>i.second;
      bool ans=true;
      if(v[0].second>v[0].first)
      ans=false;
      else
      {
          for(int i=1;i<n;i++)
          {
              if(v[i].first<v[i-1].first||v[i].second<v[i-1].second)
              {
                  ans=false;
                  break;
              }
              if(v[i].second>v[i].first)
              {
                  ans=false;
                  break;
              }
              if((v[i].first-v[i-1].first)<(v[i].second-v[i-1].second))
              {
                  ans=false;
                  break;
              }
          }
      }
      if(ans)
      cout<<"YES\n";
      else cout<<"NO\n";
      
  }
}