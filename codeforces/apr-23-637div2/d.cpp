#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
#define int long long int
#define dbg(x) cout << '>' << #x << ':' << x << endl;
#define M 1000000007
string digits[]={"1110111", "0010010", "1011101", "1011011", "0111010", "1101011", "1101111", "1010010", "1111111", "1111011"};
string arr[2005];
int make[2005][10];
bool dp[2005][2005];
int canMake(string s,int n)
{
    int x = 0;
    for(int i=0;i<7;i++)
    {
        if(s[i]=='1'&&digits[n][i]=='0')
        return -1;

        if(s[i]=='0'&&digits[n][i]=='1')
        x++;
    }
    return x;
}
int32_t main()
{
  fastio
  #ifndef ONLINE_JUDGE
      freopen("F:\\cp\\input.txt","r",stdin);
      freopen("F:\\cp\\output.txt","w",stdout);
  #endif
  int n,k;
  cin>>n>>k;
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
      for(int j=0;j<10;j++)
      {
          make[i][j]=canMake(arr[i],j);
      }
  }
  
  memset(dp,false,sizeof(dp));

  dp[n][0]=true;
  
  for(int i=n-1;i>=0;i--)
  {
      for(int j=0;j<=k;j++)
      {
          for(int z=0;z<10;z++)
          {
              if(make[i][z]==-1)continue;
              
              if(make[i][z]<=j&&dp[i+1][j-make[i][z]])
              {
                  dp[i][j]=true;
              }
          }
      }
  }

  if(!dp[0][k])
  {cout<<"-1\n"; return 0;}

  for(int i=0;i<n;i++)
  {
     int x = -1;
      for(int d=9;d>=0;d--)
      {
        // 
          
          if(make[i][d]!=-1&&k>=make[i][d]&&dp[i+1][k-make[i][d]])
          {
              x=d;
              k-=make[i][d];
              break;
          }
        
      }
      if(x!=-1)
        cout<<x;
  }


 
  

  return 0;
}
