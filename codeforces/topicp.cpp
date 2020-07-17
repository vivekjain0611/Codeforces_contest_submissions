#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    cin>>b[i];

    vector<int> vec(n);
    for(int i=0;i<n;i++)
    {
        vec[i]=a[i]-b[i];
    }
    sort(vec.begin(),vec.end());
    vector<int>::iterator itr;
    int ans=0;
    for(itr = vec.begin();itr<vec.end();itr++)
    {
         int x = 0-(*itr);
         int p=(vec.end()-upper_bound(itr+1,vec.end(),x));
        //  cout<<p<<endl;
         ans+=p;

    }
    cout<<ans<<endl;

}