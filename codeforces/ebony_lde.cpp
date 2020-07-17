#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define debug(x) cout << '>' << #x << ':' << x << endl;
#define M 1000000007
#define pb push_back
int gcd(int a, int b, int &x, int &y) {
    if (a == 0) {
        x = 0; y = 1;
        return b;
    }
    int x1, y1;
    int d = gcd(b%a, a, x1, y1);
    x = y1 - (b / a) * x1;
    y = x1;
    return d;
}
int32_t main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
//   #ifndef ONLINE_JUDGE
//   freopen("input.txt","r",stdin);
//   freopen("output.txt","w",stdout);
//   #endif
  int a,b,c,x,y,g,k1,k2;
  cin>>a>>b>>c;
  g=gcd(a,b,x,y);
  if(c%g)
  {
      cout<<"No\n";
  }
  else
  {
      x*=(c/g);
      y*=(c/g);
      
      if(x<0)
      {
          while(x<0)
          {
              x+=(b/g);
              y-=(a/g);
          }
      }
       
       else if(y<0)
      {
           while(y<0)
          {
              x-=(b/g);
              y+=(a/g);
          }
      }
      if(x<0||y<0)
      cout<<"No\n";
      else cout<<"Yes\n";
  }
  
  
}
