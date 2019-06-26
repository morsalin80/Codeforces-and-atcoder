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
    map<pair<ll,ll>,int >mpr;
    map<pair<ll,ll>,int >::iterator itf;
    map<ll,int>x,y;
    map<ll,int>::iterator it;
    ll xr[n],yr[n];
    for(int i=0;i<n;i++)
        cin>>xr[i]>>yr[i];
    for(int i=0;i<n;i++)
        mpr[mp(xr[i],yr[i])]++;
    for(int i=0;i<n;i++)
    {
        x[xr[i]]++;
        y[yr[i]]++;
    }
    ll cnt = 0;
    for(it=x.begin();it!=x.end();it++)
    {
        ll j = (*it).second;
        cnt+= (j*(j-1))/2;
    }
    for( it = y.begin();it!=y.end();it++)
    {
        ll j = (*it).second;
        cnt += (j*(j-1))/2;
    }
    for(itf = mpr.begin();itf!=mpr.end();itf++)
    {
        ll j = (*itf).second;
        cnt -= (j*(j-1))/2;
    }
    cout << cnt << endl;
    return 0;
}

