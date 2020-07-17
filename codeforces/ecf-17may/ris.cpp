#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define M 1000000007
#define pb push_back
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
		string s;
		cin>>s;
		unordered_map<char,int>m1,m2;
		int i,j;
		for(i=0;i<s.size();i++)
		{
			m1[s[i]]++;
			if(m1['1']>0&&m1['2']>0&&m1['3']>0)
			break;
		}
		if(i==s.size())
		{
			cout<<"0"<<endl;
			continue;
		}
		
		else
		{
			for( j=i;j>=0;j--)
			{
				m2[s[j]]++;
				if(m2['1']>0&&m2['2']>0&&m2['3']>0)
				break;
			}
		}
		//cout<<i<<" "<<j<<endl;
		cout<<i-j+1<<endl;
    }
    return 0;
}