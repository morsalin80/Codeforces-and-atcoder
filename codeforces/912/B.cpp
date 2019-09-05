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
    ll n,k;
    while(cin>>n>>k)
    {
        ll p=0;
        ll x = 1;
        while(x<=n)
        {
            x*=2;
            p++;
        }
        //cout << p-1 << " "<< x/2 << endl;
        if(k==1) cout << n <<endl;
        else
        {
            x/=2;
            ll ans = x ^ (x-1);
            cout << ans << endl;
        }
    }
    return 0;
}
