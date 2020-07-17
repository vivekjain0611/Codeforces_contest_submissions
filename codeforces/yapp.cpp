#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        bool ans = false;
        for(int i=0;i<n-2;i++)
        {
            for(int j=i+2;j<n;j++)
            {
                if(arr[j]==arr[i])
                {
                    ans=true;
                    break;
                }
                if(ans)
                break;
            }
        }
        if(ans)cout<<"YES\n";
        else cout<<"NO\n";
    }
}