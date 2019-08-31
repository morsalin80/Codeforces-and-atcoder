#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define f0(n) for(int i=0;i<n;i++)
#define ms(x) memset(x,0,sizeof(x))
#define ins insert
#define IOS ios::sync_with_stdio(false);
using namespace std;
int pet(ll l,ll r,ll kk, ll nn)
{
    ll mid = l+ (r-l)/2LL;
    if(mid>kk)
        pet(l,mid-1,kk,nn-1);
    else if(mid<kk)
        pet(mid+1,r,kk,nn-1);
    else
        return nn;
}
int main()
{
	IOS
    ll n,k;
    while(cin>>n>>k)
    {
        ll sz=1;
        for(int i=1;i<n;i++)
            sz = sz*2LL + 1LL;
        cout<< pet(1,sz,k,n) << endl;
    }
    return 0;
}

