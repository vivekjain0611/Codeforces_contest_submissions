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
  vector<int> vec(100001,0);
  for(int i=1;i<=100001;i++)
  {
      vec[i]=vec[i-1]+i;
  }
  int t;
  cin>>t;
  while(t--)
  {
      int n,k;
      cin>>n>>k;
      int a=lower_bound(vec.begin(),vec.end(),k)-vec.begin();
      a++;
    //   cout<<a<<endl;
      int b=(a-1)-(vec[a-1]-k);
    //   cout<<b<<endl;
      a--;
      b--;
      string s = "";
    //   cout<<a<<" "<<b<<endl;
      for(int i=0;i<n;i++)
      {
          s+='a';
          if(i==a||i==b)
          s[i]='b';
      }
      for(int i=n-1;i>=0;i--)
      cout<<s[i];
      cout<<endl;
  }
}
