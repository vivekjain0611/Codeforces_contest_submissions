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
  int T;
  cin>>T;
  while(T--)
  {
      int n,x,d=0;
      cin>>n>>x;
      string s;
      cin>>s;
      map<int,int> mp;
    //   mp[0]=1;
      for(char c:s)
      {
          if(c=='0')d++;
          else d--;
          mp[d]++;
      }
      int ans=0;
    //   dbg(d);
      if(d==0)
      {
          if(mp[x]==0)
          {
              ans=0;
          }
          else
          {
              ans=-1;
          }
          
      }
      else
      {
          for(auto it:mp)
          {
              int a = it.first;
            //   dbg(a);
              if((x-a)%d!=0)continue;
              if((x-a)/d+1<=0)continue;
              if((x-a)%d==0) ans+=mp[a];

          }
      }
        if(x==0&&ans!=-1)ans++;
      cout<<ans<<endl;
      
  }
  
  return 0;
}
