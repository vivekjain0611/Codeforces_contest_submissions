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
      int l=0,r=0,u=0,d=0;
      for(char c:s)
      {
          if(c=='L')l++;
          else if(c=='R')r++;
          else if(c=='U')u++;
          else d++;
      }
      
      if(l==0||r==0)
      {
          if(u&&d)
          cout<<"2\nUD\n";
          else cout<<"0\n\n";
      }
      else if(u==0||d==0)
      {
          if(l&&r)
          cout<<"2\nLR\n";
          else cout<<"0\n\n";
      }
      else
      {
          cout<<2*min(l,r)+2*min(u,d)<<endl;
      for(int i=0;i<min(l,r);i++)cout<<"L";
      for(int i=0;i<min(u,d);i++)cout<<"U";
      
      for(int i=0;i<min(l,r);i++)cout<<"R";
      for(int i=0;i<min(u,d);i++)cout<<"D";
      cout<<endl;
      }
      
      
  }
  return 0;
}
