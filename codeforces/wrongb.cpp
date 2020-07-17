#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define M 1000000007
#define pb push_back
int32_t main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int t;
  cin>>t;
  vector<int> S(20000,0);
  for(int i=1;i<20000;i++)
  {
      S[i]=S[i-1]+i;
  }
  
  while(t--)
  {
      int n;
      cin>>n;
      int arr[n+1]={0};
      for(int i=1;i<=n;i++)
      {
          int x;
          cin>>x;
          arr[i]=arr[i-1]+x;
      }
      vector<pair<int,int>> ans;
 
      for(int i=1;i<n;i++)
      {
          if(S[i]==arr[i])
          {
              if((arr[n]-arr[i])==S[n-i])
              {
                  ans.push_back({i,n-i});
              }
          }
      }
 
      cout<<ans.size()<<endl;
      for(int i=0;i<ans.size();i++)
      {
          cout<<ans[i].first<<" "<<ans[i].second<<endl;
      }
  }
}
