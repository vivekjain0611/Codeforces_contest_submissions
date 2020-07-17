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
    unsigned int powof3[41],q,n,ans;
    powof3[0]=1;
    for(int i=1;i<=40;i++)
    {
        powof3[i]=powof3[i-1]*3;
    }
    cin>>q;
    while(q--)
    {
        cin>>n;
        unsigned int temp = n;
        vector<int> base3;
        while(n)
        {
            base3.push_back(n%3);
            n/=3;
        }
        
        int z = base3.size();
        int zpos = z,tpos = z;

       
        for(int i = z-1;i>=0;i--)
        {
            if(base3[i]==2)
            {
                tpos = i;
                break;
            }
            else if(base3[i]==0)
            {
                zpos = i;
            }
        }
        
        
        if(tpos == z)
        ans = temp;
        
        else if(zpos == z)
        ans = powof3[z];

        else
        {
            ans = 0;
            base3[zpos] = 1;
            
            for(int i = zpos;i<z;i++)
            {
                if(base3[i])
                {
                    ans += powof3[i];
                }
            }
        }
        
        
        cout<<ans<<endl;


    }
    return 0;
}