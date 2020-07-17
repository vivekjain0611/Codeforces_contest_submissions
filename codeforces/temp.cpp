#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define M 1000000007
#define debug(x) cout << '>' << #x << ':' << x << endl;
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
      int n,m=INT_MIN;
      cin>>n;
      vector<int> vec(n),freq(n,0);
      for(auto &i:vec)
      {
          cin>>i;
          m=max(m,i);
          freq[i]++;
      }
      
      int p=1;
      while(p<=m&&freq[p]==2)
      {
          p++;
      }
      bool flag=true;
      for(int i=p;i<=m;i++)
      {
          if(freq[i]!=1)
          {
              flag=false;
              break;
          }
      }
      if(!flag)
      cout<<"0\n";
      else
      {
          vector<pair<int,int>> ans;
          int l1 = p-1;
          int l2 = n-l1;
          
          int L = min(l1,l2);
        //    debug(L)
          int pfx[L+1]={0};
          int sfx[L+1]={0};
          for(int i=0;i<L;i++)
          {
              if(vec[i]<=L)
              {
                  pfx[vec[i]]++;
              }
              if(vec[n-i-1]<=L)
              {
                  sfx[vec[n-i-1]]++;
              }
          }
          bool f=true;
          for(int i=1;i<=L;i++)
          {
              if(pfx[i]!=1)
              {
                 f=false;
                 break;
              }
          }
          if(f)ans.push_back({L,n-L});
          if(L!=n-L){
          f=true;
          for(int i=1;i<=L;i++)
          {
              if(sfx[i]!=1)
              {
                 f=false;
                 break;
              }
          }
          if(f)ans.push_back({n-L,L});
          }
          cout<<ans.size()<<endl;
          for(pair<int,int> p:ans)
          cout<<p.first<<" "<<p.second<<endl;

      }
      


  }
}
