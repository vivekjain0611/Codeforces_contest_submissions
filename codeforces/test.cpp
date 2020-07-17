#include <bits/stdc++.h>
 
using namespace std;
 
const int N = 1e5 + 5;
 
int n;
pair < int , int > a[N];
 
int dp[N]; // maximum number of activated beacons
 
main(){
 
    scanf("%d" , &n);
 
    for(int i = 0 ; i < n ; i ++){
            scanf("%d %d" , &a[i].first , &a[i].second);
    }
 
    sort(a , a + n);
 
    int ans = 0;
    for(int i = n-1 ; i >= 0 ; i --){
 
            // try to activate this beacon
            int nxt = lower_bound(a , a + n , make_pair(a[i].first - a[i].second , -1)) - a - 1;
 
            if(nxt < 0) {
                    ans = max(ans , dp[i] + 1);
                    continue;
            }
            dp[nxt] = max(dp[nxt] , 1 + dp[i]);
            ans = max(ans , 1 + dp[i]);
    }
 
    // (n - (maximum number of activated)) is the minimum number of destroyed beacons
 
    printf("%d\n" , n - ans);
 
    return 0;
}