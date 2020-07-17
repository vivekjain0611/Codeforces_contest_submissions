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
  int T;
  cin>>T;
  while(T--)
  {
      string s,t;
      cin>>s>>t;
      set<int> arr[26];
      
      for(int i=0;i<s.size();i++)
      {
          arr[s[i]-'a'].insert(i);
      }

      int ans=1;
      bool flag=true;
      int p = -1;

      for(char c:t)
      {
         if(arr[c-'a'].size()==0)
         {
             flag=false;
             break;
         } 
        
        set<int>::iterator it = arr[c-'a'].upper_bound(p);
        if(it!=arr[c-'a'].end())
        {
            p = *(it);
        }
        else
        {
            ans++;
            p=*arr[c-'a'].begin();
        }
        

      }
      if(!flag)
      cout<<"-1\n";
      else cout<<ans<<"\n";
  }
  return 0;
}
