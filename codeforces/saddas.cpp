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
  int n;
  cin>>n;
  int d = floor(log10(n))+1;
  d--;
  int b=0;
  for(int i=1;i<=d;i++)
  {
      b+=(1<<i);
  }
  int c=0;
  int i=0;
  while(n)
  {
      int k = n%10;
      if(k==7)
      c+=(1<<i);
      i++;
      n/=10;
  }
  cout<<b+c+1;
  
}
