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
    int k,n,s,p;
    while(cin>>k>>n>>s>>p)
    {
        ll x = ceil((double)n/(double)s);
        x*=k;
        ll ans = ceil((double)x/(double)p);
        cout << ans <<endl;
    }
    return 0;
}

