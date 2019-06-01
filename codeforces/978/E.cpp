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
    int n,w;
    cin>>n>>w;
    ll minb=1000000,maxb=-1000000,b=0;
    for(int i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        b+=a;
        if(b<minb) minb = b;
        else if(b>maxb) maxb = b;
    }
    if(maxb>w) {cout << "0\n";return 0;}
    ll lf,rg;
    ///minimum possible number of passengers
    if(minb<0) lf = -minb;
    else lf = 0;
    ///maximum possible number of passengers
    if(maxb<=0) rg = w;
    else rg = w-maxb;
    if(lf>rg) cout << "0\n";
    else if(n<=1 && b==1)cout << w <<endl;

    else cout << rg-lf+1<<"\n";
    return 0;
}

