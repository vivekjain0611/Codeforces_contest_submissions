#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
#define int long long int
#define dbg(x) cout << '>' << #x << ':' << x << endl;
#define M 1000000007
vector<int> factorial(1001);
int binpow(int a, int b)
{
    a %= M;
    int res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a % M;
        a = a * a % M;
        b >>= 1;
    }
    return res;
}

// x modulo inverse M, M is prime
int inverse(int x)
{
    return binpow(x, M - 2);
}

// ncr % M factorial precalculated
int ncr(int n, int k)
{
    return (factorial[n] % M * inverse(factorial[k]) % M * inverse(factorial[n - k]) % M) % M;
}

//calculate factorial
void calfac(int n)
{
    factorial[0] = 1;
    for (int i = 1; i < n; i++)
    {
        factorial[i] = factorial[i - 1] * i % M;
    }
}
int32_t main()
{
  fastio
  #ifndef ONLINE_JUDGE
      freopen("F:\\cp\\input.txt","r",stdin);
      freopen("F:\\cp\\output.txt","w",stdout);
  #endif
  int c;
  cin>>c;
  vector<int> C(c);
  for(auto &i:C)
  {
    cin>>i;
  }
  int ans = 1;
  calfac(1001);
  for(int i=1;i<c;i++)
  {
      int n = C[i-1]+C[i]-1;
      int r = C[i]-1;
      ans = (ans%M * ncr(n,r)%M)%M;

       C[i]+=C[i-1];
  }
  cout<<ans<<endl;
  return 0;
}
