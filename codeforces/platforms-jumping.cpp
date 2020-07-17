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
  int n,m,d,tot=0;
  cin>>n>>m>>d;
  vector<int> c(m);
  for(auto &i:c)cin>>i,tot+=i;
  if((d-1)*(m+1)+tot<n)
  {
      cout<<"NO\n";
      return 0;
  }
  else
  {
      cout<<"YES\n";
      int span = tot+(m-1)*(d-1);
    //   dbg(tot)
    //   dbg(span)

      if(span>=n)
      {
              int need = n-tot;
            //   dbg(remove)
              int cnt=0;
              for(int i=0;i<m;i++)
              {
                  for(int j=0;j<c[i];j++)
                  {
                      cout<<i+1<<" ";
                      cnt++;
                  }

                  for(int z=0;z<d-1&&need>0&&i!=m-1;z++)
                  {
                      cout<<"0 ";
                      need--;
                      cnt++;
                  }
              }
              cout<<endl;
            //   dbg(cnt);
      }
      else
      {
          int add = n-span;
          for(int i=0;i<d-1&&add>0;i++)
          {
              cout<<"0 ";
              add--;
          }

          for(int i=0;i<m;i++)
          {
              for(int j=0;j<c[i];j++)
              {
                  cout<<i+1<<" ";
              }
              for(int k=0;k<d-1&&i!=m-1;k++)
              {
                  cout<<"0 ";
              }
          }

          for(int i=0;i<d-1&&add>0;i++)
          {
              cout<<"0 ";
              add--;
          }

      }
      
    
  }
  
  return 0;
}
