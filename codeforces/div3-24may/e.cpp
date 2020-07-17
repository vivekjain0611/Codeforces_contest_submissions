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
      vector<string> v(n);
      for(auto &i:v)cin>>i;
      int chk[n][n];
      for(int i=0;i<n;i++)
      {
          chk[n-1][i]=v[n-1][i]-'0';
          chk[i][n-1]=v[i][n-1]-'0';
      }
      bool ans=true;
      for(int i=n-2;i>=0;i--)
      {
          for(int j=n-2;j>=0;j--)
          {
              if(v[i][j]=='1')
              {
                  if(chk[i+1][j]==1||chk[i][j+1]==1) 
                  chk[i][j]=1;
                  else 
                  {
                      ans=false;
                      break;
                  }
              }
              else
              {
                  chk[i][j]=0;
              }
              
          }
          if(!ans) break;
      }
      
      if(ans) cout<<"YES\n";
      else cout<<"NO\n";

  }
  return 0;
}
