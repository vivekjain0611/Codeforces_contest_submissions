#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);
#define int long long int
#define cases int t;cin>>t;while(t--)
#define pb push_back
#define M 1000000007
int arr[100005];
int N,S;
int check(int x)
{
    int temp[N];
    for(int i=0;i<N;i++)
    {
        temp[i]=arr[i]+x*(i+1);
    }
    sort(temp,temp+N);
    int  sum=0;
    for(int i=0;i<x;i++)
    {
        sum+=temp[i];
    }
    return sum;
    
}
int32_t main()
{
    FAST
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    cin>>N>>S;
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }

    int low=0,high=N,ans1=0,ans2=0;
    while(low<=high)
    {
        int mid=(low+high)/2;
        int F = check(mid);
        if(F<=S)
        {
            ans1 = mid;
            ans2 = F;
            low = mid+1;
        }
        else
        {
            high = mid-1;
        }
        
    }
   
   cout<<ans1<<" "<<ans2;
    return 0;
}