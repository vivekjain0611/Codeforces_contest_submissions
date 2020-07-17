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
      int n;
      cin>>n;
      vector<int> v(n),mark(n+1,0);
      map<int,int> mp;
      for(int i=0;i<n;i++)
      {
          cin>>v[i];
          mp[v[i]]=i;
      }

      bool flag = true;
      int x=1;
      while(x<=n)
      {
          int start = mp[x];
          mark[start]=1;
          for(int i=start+1;i<n&&mark[i]!=1;i++)
          {
              if(v[i]-v[i-1]!=1)
              {
                  flag=false;
                  break;
              }
              mark[i]=1;
              x++;
          }
          if(flag==false)break;
          x++;
      }
      if(flag)
      {
        cout<<"Yes\n";
      }
      else cout<<"No\n";
      
  }
  return 0;
}
