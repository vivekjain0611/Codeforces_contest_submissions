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
  while(t--){
  vector<int> odd,even;
  int n;
  cin>>n;
  while(n--)
  {
      int x;
      cin>>x;
      if(x&1) odd.push_back(x);
      else even.push_back(x);
  }
  sort(odd.begin(),odd.end());
  sort(even.begin(),even.end());
  int osz = odd.size();
  if(osz%2==0)
  {
      cout<<"YES\n";
  }
  else
  {
      bool flag=false;
      for(int i:odd)
      {
          for(int j:even)
          {
              if(abs(i-j)==1)
              {
                  flag=true;
              }
          }
      }
      if(flag) cout<<"YES\n";
      else cout<<"NO\n";
  }
  
  }
  return 0;
}
