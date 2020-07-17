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
      string s;
      cin>>s;
      int n = s.size();
      int one = 0,zero=0;
      for(int i=0;i<n;i++)
      {
          if(s[i]=='0')zero++;
          else one++;
      }
      if(zero==0||one==0)
      cout<<s<<endl;
      else
      {
          for(int i=0;i<n;i++)cout<<"01";
          cout<<endl;
      }
      
  }
  return 0;
}
