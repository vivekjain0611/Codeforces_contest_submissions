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
      vector<int> v(n);
      for(int &i:v)cin>>i;
    //   vector<pair<int,int>> In(n/2);
    //   vector<int> S(n/2);
      map<int,int> mp;
      vector<int> freq(2*k+2,0LL);
      for(int i=0;i<n/2;i++)
      {
          int l = min(v[i],v[n-1-i])+1;
          int r = max(v[i],v[n-1-i])+k;
          int s =v[i]+v[n-i-1];
          mp[s]++;
          freq[l]++;
          freq[r+1]--;
      }

       
    //    for(int i=0;i<n/2;i++)
    //    {
    //        cout<<In[i].first<<" "<<In[i].second<<" "<<S[i]<<endl;
    //    }
      
      for(int i=2;i<=2*k;i++)
      {
          freq[i]+=freq[i-1];
      }
      int ans = INT64_MAX;
      for(int i=2;i<=2*k;i++)
      {
          dbg(freq[i]);
          int ans = min(ans,2*(n/2-freq[i])+freq[i]-mp[i]);
      }



    //  for (int i = mn; i <= mx ; i++) 
    //         cout<<freq[i]<<" ";
    //  cout<<endl;
    //  int ans = INT64_MAX;
    //  for(int i=2;i<=2*k;i++)
    //  {
    //      int y = n/2 - freq[i];

    //      y*=2;
    //      int ek = freq[i]-mp[i];
    //      ans = min(ans,y+ek);
    //  }
     cout<<ans<<endl;
  }
  return 0;
}
