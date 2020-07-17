//WA
#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
#define int long long int
#define dbg(x) cout << '>' << #x << ':' << x << endl;
#define M 1000000007
int F(string s)
{
   
    

}
int32_t main()
{
  fastio
  #ifndef ONLINE_JUDGE
      freopen("F:\\cp\\input.txt","r",stdin);
      freopen("F:\\cp\\output.txt","w",stdout);
  #endif
  int l,r;
  cin>>l>>r;
  l--;
  int f = F(to_string(r));
  int s = F(to_string(l));
  cout<<f-s<<endl;
  return 0;
  
}
