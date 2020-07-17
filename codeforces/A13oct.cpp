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
    int t,a,b,c,d,k;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d>>k;
        int pen = (a+c-1)/c;
        int pencil = (b+d-1)/d;
        if(pen+pencil<=k)
        cout<<pen<<" "<<pencil<<endl;
        else
        {
            cout<<"-1\n";
        }
        
    }
    
    return 0;
}