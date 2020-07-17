#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);
#define int unsigned long long int
#define cases int t;cin>>t;while(t--)
#define pb push_back
#define M 1000000007
int n,m,k;
int sum(int x,int y)
{
    if(y==0)
    return x;
    int s;
    if(x<y)
    {
        if(!(x&1))
        s = (x/2)*(2*y-x+1);
        else
        s = x*((2*y-x+1)/2);
    }
    else
    {
         if(!(y&1))
         s = (y/2)*(y+1)+(x-y);
         else
         s = y*((y+1)/2)+(x-y);  
    }
    return s;
}
bool check(int mid)
{
     int left = sum(k-1,mid-1);
     int right = sum(n-k,mid-1);
    // cout<<left<<" "<<right<<" "<<mid<<endl;
     if((m-mid)>=(left+right))
     {
         //cout<<left+right+mid<<endl;
         return true;
     }
     else
     return false;
     
}
int32_t main()
{
    FAST
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    cin>>n>>m>>k;
    int low = 1,high=m,ans=1;
    while(low<=high)
    {
        int mid = (low+high)/2;
       // cout<<mid<<" ";
        if(check(mid))
        {
            ans = mid;
           // cout<<ans<<endl;
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