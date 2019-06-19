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
    ll a[3],d;
    while(cin>>a[0]>>a[1]>>a[2]>>d)
    {
        sort(a,a+3);
        ll x = d-(a[1]-a[0]);
        ll y = d-(a[2]-a[1]);
        if(x<0) x = 0;
        if(y<0) y = 0;
        cout << x+y<<endl;
    }
    return 0;
}

