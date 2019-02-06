#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define ms(x) memset(x,0,sizeof(x))
#define IOS ios::sync_with_stdio(false);
using namespace std;
int main()
{
	IOS
    ll n,k;
    while(cin>>n>>k)
    {
        ll lim=1;
        while(k--) lim*=10;
        ll lcm = (n*lim)/__gcd(n,lim);
        cout << lcm << endl;
    }
    return 0;
}

