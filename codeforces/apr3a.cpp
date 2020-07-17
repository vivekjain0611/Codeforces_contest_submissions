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
  while(t--)
  {
      int n,x;
      cin>>n>>x;
      int arr[101]={0};
      for(int i=0;i<n;i++)
      {
          int temp;
          cin>>temp;
          arr[temp]=1;
      }
      for(int i=1;i<=100;i++)
      {
          if(x==0)
          {
              break;
          }
          if(!arr[i])
          {arr[i]=1;x--;}

      }
      int ans=0;
      for(int i=1;i<=100;i++)
      {
          if(arr[i])
          ans=i;
          else
          {
              break;
          }
          
      }
      if(x)ans+=x;
      cout<<ans<<endl;
  }
}
