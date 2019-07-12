#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define f0(n) for(int i=0;i<n;i++)
#define ms(x) memset(x,0,sizeof(x))
#define ins insert
#define IOS ios::sync_with_stdio(false);
using namespace std;
int main()
{
	IOS
    int n;
    cin>>n;
    unordered_map<int,int>fact;
    while(n--)
    {
        int s;
        cin>>s;
        for(int i=2;i<=sqrt(s);i++)
        {
            if(s%i==0)
                fact[i]++;
            while(s%i==0)
                s/=i;
        }
        if(s>1) fact[s]++;
    }
        int ans = 1;
    for(auto it = fact.begin();it!=fact.end();it++)
    {
        ans = max(ans,(*it).second);
    }
    cout << ans <<endl;
    return 0;
}
