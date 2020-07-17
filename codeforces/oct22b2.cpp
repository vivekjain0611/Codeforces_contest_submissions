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
    int q,n;
    cin>>q;
    while(q--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            arr[i]--;
        }
        int k = 0;
        vector<int> V[n];
        int vis[n]={0};

        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                vis[i]=1;
                int j = i;
                V[k].push_back(i);
                while(!vis[arr[j]])
                {
                    j = arr[j];
                    vis[j]=1;
                    V[k].push_back(j);
                }
                k++;
            }
        }
        int ans[n];
        for(int i=0;i<k;i++)
        {
            for(int j = 0;j<(int)V[i].size();j++)
            {
                ans[V[i][j]] = V[i].size();
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;

    }
    return 0;
}