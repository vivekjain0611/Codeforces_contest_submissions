#include<bits/stdc++.h>
using namespace std;
//WA
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
#define int long long int
#define dbg(x) cout << '>' << #x << ':' << x << endl;
#define M 1000000007
bool cmp(pair<int,int> &a,pair<int,int> &b)
{
    if(a.first==b.first)
    return a.second>b.second;

    return a.first>b.first;
}
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
      vector<int> a(n);
      for(auto &i:a)cin>>i;
      int m;
      cin>>m;
      vector<pair<int,int>> ps(m);
      for(auto &p:ps)
      cin>>p.first>>p.second;
      sort(ps.begin(),ps.end(),cmp);
      for(int i=1;i<m;i++)
      {
          ps[i].second = max(ps[i-1].second,ps[i].second);
      }
      vector<int> p(m),s(m);
      for(int i=0;i<m;i++)
      {
          p[i]=ps[m-i-1].first;
          s[i]=ps[m-i-1].second;
      }
      ps.clear();
      
     
      if(p[m-1]<*max_element(a.begin(),a.end()))
      {
          cout<<"-1\n";
          continue;
      }
      vector<int> e(n);
      stack<int> stk;
      stk.push(n-1);
      for(int i=n-2;i>=0;i--)
      {
          while(!stk.empty()&&a[stk.top()]<a[i])
          {
              e[stk.top()]=i;
              stk.pop();
          }
          stk.push(i);
      }
      while(!stk.empty())
      {
          e[stk.top()]=-1;
          stk.pop();
      }
      
      for(int i=0;i<n;i++)
      {
          e[i]=i-e[i];
      }
      int dp[n];
      dp[0]=1;
      for(int i=1;i<n;i++)
      {
        dp[i]=1;
        int idx = lower_bound(p.begin(),p.end(),a[i])-p.begin();
        int f = min(e[i],s[idx]);
        int prev = i-f;
        if(prev>=0)
        dp[i]+=dp[prev];
      }
      cout<<dp[n-1]<<endl;
  }
  return 0;
}
