#include<bits/stdc++.h>
using namespace std;
//very nice problem
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
      vector<int> v(n);
      for(int &i:v)cin>>i;
      vector<pair<int,int>> In(n/2);
      vector<int> S(n/2);
      map<int,int> mp;
      for(int i=0;i<n/2;i++)
      {
          In[i].first = min(v[i],v[n-1-i])+1;
          In[i].second = max(v[i],v[n-1-i])+k;
          S[i] =v[i]+v[n-i-1];
          mp[S[i]]++;
      }

       
    //    for(int i=0;i<n/2;i++)
    //    {
    //        cout<<In[i].first<<" "<<In[i].second<<" "<<S[i]<<endl;
    //    }
      int mn = 2*k;
      int mx = 0;
      vector<int> freq(2*k+2,0LL);
      int l,r;
      
      for(int i=0;i<n/2;i++)
      {
          l = In[i].first;

          r = In[i].second;
          freq[l]=freq[l]+1;
          freq[r+1] = freq[r+1]-1; 
  
        if (l<mn) 
            mn=l; 
        if (r>mx) 
            mx=r; 
      }

      for (int i = mn; i <= mx ; i++) 
        freq[i] = freq[i] + freq[i - 1]; 

    //  for (int i = mn; i <= mx ; i++) 
    //         cout<<freq[i]<<" ";
    //  cout<<endl;
     int ans = INT64_MAX;
     for(int i=2;i<=2*k;i++)
     {
         int y = n/2 - freq[i];

         y*=2;
         int ek = freq[i]-mp[i];
         ans = min(ans,y+ek);
     }
     cout<<ans<<endl;
  }
//   int64_t p = (2<<30)-1;
//   dbg(p);

  return 0;
}
