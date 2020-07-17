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
  int t;
  cin>>t;
  while(t--)
  {
      int n,k;
      cin>>n>>k;
      set<int> s;
      for(int i=0;i<n;i++)
      {
          int x;
          cin>>x;
          s.insert(x);
      }

       int sz = s.size();

       if(sz>k)
       cout<<"-1\n";

       else
       {
          cout<<k*n<<endl;
          
          for(int i=0;i<n;i++)
          {
              for(auto it:s)
              {
                  cout<<it<<" ";
              }

              for(int j=0;j<k-sz;j++)
              {
                  cout<<"1 ";
              }
          }
          cout<<endl;
       }
       
      
  }
  return 0;
}
