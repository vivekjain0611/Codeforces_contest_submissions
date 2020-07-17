#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
#define int long long int
#define dbg(x) cout << '>' << #x << ':' << x << endl;
#define M 1000000007
vector<int> spf(5000001),pfx(5000001);

void seive()
{
    for(int i=0;i<5000001;i++) spf[i]=i;
    for(int i=2;i*i<=5000001;i++)
    {
        if(spf[i]==i)
        {
            for(int j=i*i;j<5000001;j+=i)
            {
                if(spf[j]==j)
                spf[j]=i;
            }
        }
    }
}
int32_t main()
{
  fastio
  #ifndef ONLINE_JUDGE
      freopen("F:\\cp\\input.txt","r",stdin);
      freopen("F:\\cp\\output.txt","w",stdout);
  #endif
  seive();
  pfx[0]=0;
  pfx[1]=0;
  for(int i=2;i<5000001;i++)
  {
      pfx[i]=pfx[i/spf[i]]+1;
  }
  for(int i=1;i<5000001;i++)
  {
      pfx[i]+=pfx[i-1];
  }
  int t;
  cin>>t;
  while(t--)
  {
      int a,b;
      cin>>a>>b;
      cout<<pfx[a]-pfx[b]<<"\n";
  }
  return 0;
}
