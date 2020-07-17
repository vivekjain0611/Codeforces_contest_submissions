#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);
#define int long long int
#define F first
#define S second
#define pb push_back
#define M 1000000007
bool ifinter(int x,int y,int l,int r)
{
    return !((y<l)||(r<x));
}
int32_t main()
{
    FAST
    int t;
    cin>>t;
    while(t--)
    {
        int n,flag;
        cin>>n;
        vector<pair<pair<int,int>,int>> vec,left,right;
        for(int i=0;i<n;i++)
        {
            int x,y,z;
            cin>>x>>y>>z;
            if(i==0)
            {
                left.push_back({{x,y},z});
            }
            vec.push_back({{x,y},z});
        }
        for(int i=1;i<n;i++)
        {
            flag = 1;
            int x,y,vel;
            x = vec[i].F.F;
            y = vec[i].F.S;
            vel = vec[i].S;

            int cright = 0;

            for(int j=0;j<(int)left.size();j++)
            {
                int l,r,lvel;
                l = left[j].F.F;
                r = left[j].F.S;
                lvel = left[j].S;
                if(ifinter(x,y,l,r))
                {
                    if(lvel == vel)
                    {
                        cright = 1;
                        break;
                    }
                 }

            }

            if(!cright)
            {
                left.push_back({{x,y},vel});

            }
            else
            {
                if(right.empty())
                {
                    right.push_back({{x,y},vel});
                }
                else
                {
                    for(int j=0;j<(int)right.size();j++)
                    {
                        int l,r,rvel;
                        l = right[j].F.F;
                        r = right[j].F.S;
                        rvel = right[j].S;
                        if(ifinter(x,y,l,r))
                        {
                            if(vel==rvel)
                            {
                                flag = 0;
                                break;
                            }
                        }
                    }
                }
            }

            if(!flag)
            {
                break;
            }

        }
         if(!flag)
         cout<<"NO\n";
         else
         {
             cout<<"YES\n";
         }
         
    }
    return 0;
}