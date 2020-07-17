#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);
#define int long long int
#define cases int t;cin>>t;while(t--)
#define pb push_back
#define M 1000000007
int32_t main()
{
    FAST
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n,k,med,req=0,ans=0;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    sort(arr,arr+n);
  //  for(int i=0;i<n;i++)
  //  cout<<arr[i]<<" ";
  //  cout<<endl;
    med = arr[n/2];
    for(int i=n/2;i<n;i++)
    {
        req+=(arr[n-1]-arr[i]);
    }
  //  cout<<req<<endl;
    if(k>=req)
    {
        ans = arr[n-1] + (k-req)/(n/2+1);
    }
    else
    {
        vector<int> v;
        for(int i = n/2+1;i<n;i++)
        {
            v.push_back(arr[i]-arr[i-1]); 
        }

        for(int i=1;i<=v.size();i++)
        {
            v[i-1]=v[i-1]*i;
        }
        
        for(int i=1;i<v.size();i++)
        {
            v[i]=v[i]+v[i-1];
        }
        int i = 0;
        for(i=0;i<v.size();i++)
        {
              if(v[i]>=k)
              break;
        }
        int sub = v[i]-k;
        i++;
        ans = arr[n/2+i]-(sub/(i));
        if(sub%i)
        ans--;
        
        
    }
    cout<<ans<<endl;
    
    return 0;
}