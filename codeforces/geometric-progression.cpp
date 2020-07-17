#include<bits/stdc++.h>
using namespace std;
// https://codeforces.com/contest/567/problem/C
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
  int n,k;
  cin>>n>>k;
  vector<int> v(n);
  map<int,int> start,end;
  for(int i=0;i<n;i++)
  {
      cin>>v[i];
      end[v[i]]++;
  }
  int ans=0;
  start[v[0]]++;
  end[v[0]]--;
  for(int i=1;i<n-1;i++)
  {
      end[v[i]]--;
      if(v[i]%k==0)
      {
          ans+=(start[v[i]/k]*end[v[i]*k]);
      }
      start[v[i]]++;
  }
  cout<<ans;
  return 0;
}
