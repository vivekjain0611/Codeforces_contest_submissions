#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);
#define int unsigned long long int
#define cases int t;cin>>t;while(t--)
#define pb push_back
#define M 1000000007
int a[100005],b[100005];
int n,k;
bool check(int x)
{
   int ing = 0;
   for(int i=0;i<n;i++)
   {
        int r = a[i]*x;
        if(r>b[i])
        ing+=(r-b[i]);
        if(ing>k)
        return false;
   }
   if(ing>k)
   return false;
   else
   {
       return true;
   }
   
}
int32_t main()
{
    FAST
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    cin>>n>>k;
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    int low = 0 ,high=INT_MIN;
    for(int i=0;i<n;i++)
    {
         high = max(high,(b[i]+k)/a[i]);
    }
    int ans = 0;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(check(mid))
        {
            ans = mid;
            low = mid+1;
        }
        else
        {
            high = mid-1;
        }
        
    }
    cout<<ans<<endl;
    return 0;
}