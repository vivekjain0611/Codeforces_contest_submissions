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
  int n,m;
  cin>>n>>m;
  int arr[n][m],dp[n][m],v[n];
  for(int i=0;i<m;i++)
  {
      cin>>arr[0][i];
      dp[0][i]=1;
  }
  v[0]=0;

  
  for(int i=1;i<n;i++)
  {
      int mn = i;
      for(int j=0;j<m;j++)
      {
          dp[i][j]=1;
          cin>>arr[i][j];
          if(arr[i][j]>=arr[i-1][j])
          dp[i][j]+=dp[i-1][j];
          mn=min(mn,i+1-dp[i][j]);
      }
      v[i]=mn;
  }
  int k;
  cin>>k;

//   cout<<endl;
  {
      /* code */
  }
  
  while(k--)
  {
      int l,r;
      cin>>l>>r;
      l--;r--;
      if(l>=v[r])
      cout<<"Yes\n";
      else cout<<"No\n";
  }

  return 0;
}
