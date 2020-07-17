#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);
#define int long long int
#define cases int t;cin>>t;while(t--)
#define pb push_back
#define M 1000000007

int gcdExtended(int a, int b, int *x, int *y)  
{  
  
    if (a == 0)  
    {  
        *x = 0;  
        *y = 1;  
        return b;  
    }  
  
    int x1, y1; 
    int gcd = gcdExtended(b%a, a, &x1, &y1);  
  
     
    *x = y1 - (b/a) * x1;  
    *y = x1;  
  
    return gcd;  
} 
int32_t main()
{
    int n,p,w,d;
    cin>>n>>p>>w>>d;
    int num = p-n*d;
    int deno = w-d;
    if(num>0)
    {
        int x,y,g;
        g = gcdExtended(deno,d,&x,&y);
        int r = num%deno;
        if(r%g!=0)
        {
            cout<<"-1";
        }
        else
        {
            int X = (r *(deno/g)* (x))%((deno*d)/g);
            
        }
        

        
    }
    
    return 0;
}