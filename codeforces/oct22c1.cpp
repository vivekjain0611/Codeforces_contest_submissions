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
    int powof3[10];
    powof3[0]=1;
    for(int i=1;i<10;i++)
    {
        powof3[i]=powof3[i-1]*3;
    }
    set<int> s;
    for(int i=1;i<=512;i++)
    {
        int sum = 0;
        for(int j=0;j<=9;j++)
        {
            if(i&(1<<j))
            sum+=powof3[j];
        }
        s.insert(sum);
    }
    
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        if(s.find(n)!=s.end())
        cout<<n<<endl;
        else
        {
            cout<<*s.upper_bound(n)<<endl;
        }
        
    }
    return 0;
}