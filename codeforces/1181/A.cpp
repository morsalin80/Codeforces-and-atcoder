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
    ll x,y,z;
    while(cin>>x>>y>>z)
    {
        ll cnt=0;
        cnt+= x/z;
        cnt+= y/z;
        ll l = max(x%z,y%z);
        ll m = min(x%z,y%z);
        if(z-l<=m)
        {
            cout << cnt+1 << " " << z-l <<endl;
        }
        else
            cout << cnt << " "<< "0\n";
    }
    return 0;
}

