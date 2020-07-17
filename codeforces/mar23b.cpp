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
      int n;
      cin>>n;
      int taken[n]={0};
      vector<int> arr[n];
      for(int i=0;i<n;i++)
      {
          int k;
          cin>>k;
          while(k--)
          {
              int x;
              cin>>x;
              x--;
              arr[i].push_back(x);
          }
      }
      int ans=-1;
      for(int i=0;i<n;i++)
      {
          bool chk=false;
          for(int j=0;j<arr[i].size();j++)
          {
              if(!taken[arr[i][j]])
              {
                  taken[arr[i][j]]=1;
                  chk=true;
                  break;
              }
              
          }
          if(!chk)
              ans=i+1;
          
      }
      if(ans==-1)
    {  cout<<"OPTIMAL\n";
    continue;}
      bool flag=false;
          for(int i=0;i<n;i++)
          {
               if(!taken[i])
               {
                   cout<<"IMPROVE\n";
                   cout<<ans<<" "<<i+1<<endl;
                   flag=true;
                   break;
               }
          }
          if(!flag)
          cout<<"OPTIMAL\n";
      
  }
}
