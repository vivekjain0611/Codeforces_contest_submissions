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
      string s;
      cin>>s;
      bool one=false;
      string a="1";
      string b="1";
      for(int i=1;i<n;i++)
      {
          if(s[i]=='0')
          {
              a+='0';
              b+='0';
          }
          else if(s[i]=='1')
          {
              if(one==false)
              {
                  a+='0';
                  b+='1';
                  one=true;
              }
              else
              {
                  a+='1';
                  b+='0';
              }
              
          }
          else
          {
              if(one==false)
              {
                  a+='1';
                  b+='1';
              }
              else
              {
                  a+='2';
                  b+='0';
              }
              
          }
          
      }
      cout<<a<<endl;
      cout<<b<<endl;
  }
}
