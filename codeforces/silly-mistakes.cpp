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
  vector<int> v(n);
  for(auto &i:v)cin>>i;
  if(n&1)cout<<"-1\n";
  else
  {
      bool flag=true;
      int cnt=0;
      set<int> s;
      vector<int> ans;
      int sum=0;
      for(int i=0;i<n;i++)
      {
          sum+=v[i];
          cnt++;
          if(v[i]>0)
          {
              s.insert(v[i]);
          }
          else
          {
              int x = v[i]*-1;
              if(s.find(x)==s.end())
              {
                  flag=false;
                  break;
              }
              else
              {
                  s.erase(x);
                  if(s.empty())
              }
              
          }
          
      }
      if(!flag||!s.empty())cout<<"-1\n";
      else
      {
          cout<<ans.size()<<endl;
          for(auto &x:ans)cout<<x<<" ";
      }
      
  }
  
  
  return 0;
}
