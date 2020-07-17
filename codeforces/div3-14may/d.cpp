#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
#define int long long int
#define dbg(x) cout << '>' << #x << ':' << x << endl;
#define M 1000000007
struct compare
{
    bool operator() (pair<int,int> &a,pair<int,int> &b)
    {
        if((a.second-a.first) == (b.second-b.first))
        {
            return a.first>b.first;
        }
        return (a.second-a.first) < (b.second-b.first);
    }
};
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
      int n;
      cin>>n;
      if(n==1)
      {
          cout<<"1\n";
      }
      else if(n==2)
      {
          cout<<"1 2\n";
      }
      else{
      vector<int> ans(n);
      priority_queue<pair<int,int>,vector<pair<int,int>>,compare> pq;
      pq.push({0,n-1});
      for(int i=1;i<=n;i++)
      {
          pair<int,int> tmp = pq.top();
          pq.pop();
          int a = tmp.first+(tmp.second-tmp.first)/2;
          ans[a]=i;
          if(a-1>=tmp.first) pq.push({tmp.first,a-1});
          if(a+1<=tmp.second) pq.push({a+1,tmp.second});
      }

      for(int i=0;i<n;i++)
      cout<<ans[i]<<" ";
      cout<<endl;

      }

  }
  return 0;
}
