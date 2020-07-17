#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);
#define int long long int
#define cases int t;cin>>t;while(t--)
#define pb push_back
#define M 1000000007
int powmod(int a,int b)
{
    int res = 1;
    while(b)
    {
        if(b&1)
        {
            res = (res%M)*(a%M);
            res%=M;
        }
        b=b>>1;
        a=((a%M)*(a%M))%M;
    }
    return res;
}
int32_t main()
{
    FAST
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int N,K,A,current,ans=0;
    cin>>N>>K;
    int X[N],C[N];
    for(int i=0;i<N;i++)
    cin>>X[i];
    cin>>A;
    for(int i=0;i<N;i++)
    cin>>C[i];
    priority_queue<int,vector<int>,greater<int>> pq;
    current = K;
    bool flag = true;
    for(int i=0;i<N;i++)
    {
        pq.push(C[i]);
        while(!pq.empty()&&current<X[i])
        {
            current+=A;
            ans+=pq.top();
            pq.pop();
        }
        if(current<X[i])
        {
            flag=false;
            break;
        }
    }
    if(flag)
    cout<<ans;
    else
    {
        cout<<"-1";
    }
    
}