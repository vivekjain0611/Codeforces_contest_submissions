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
  for(auto &i:v)
  cin>>i;
  sort(v.begin(),v.end());
  deque<int> dq;
  for(int i=0;i<n;i++)
  {
      if(i&1)
      {
          dq.push_back(v[i]);
      }
      else
      {
          dq.push_front(v[i]);
      }
      
  }

  for(auto x:dq)
  cout<<x<<" ";
  return 0;
}
