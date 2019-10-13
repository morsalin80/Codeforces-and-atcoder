/// Bismillahir Rahmanir Rahim

#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define f0(n) for(int i=0;i<n;i++)
#define ms(x) memset(x,0,sizeof(x))
#define ins insert
#define IOS ios::sync_with_stdio(false);
using namespace std;
const long long MOD = 1000000007;
template<typename T>inline T Bigmod(T base, T power, T MOD){
    T ret=1;
    while(power)
    {
        if(power & 1)ret=(ret*base)%MOD;
        base=(base*base)%MOD;
        power>>=1;
    }
    return ret;
}

bool sortinrev(const pair<int,int> &a,
               const pair<int,int> &b)
{
       return (a.first > b.first);
}
int main()
{
	IOS
    ll n,p,w,d;
    while(cin>>n>>p>>w>>d)
    {
        if(n*w<p) {
            cout << "-1\n";
            continue;
        }
        if(p%w==0)
        {
            if(p/w <=n){
            cout << p/w << " 0 "<< (n-p/w)<<endl;
            continue;
            }
        }
        if(p%d==0)
        {
            if(p/d <=n){
            cout << "0 "<< p/d << " " << (n-p/d)<<endl;
            continue;
            }
        }
        bool pos = false;
        int cnt= 0;
        for(ll i=min(p/w,n), j = min(p/d,n);i>=0 && j>=0 ;i--,j--)
        {
            cnt++;
            //cout << cnt << endl;
            if(cnt==999999) break;
            ll x = p-i*w;
            ll y = p-j*d;
         //   cout << x << " "<< y << endl;
            if(x%d==0)
            {
                pos = true;
                //cout << x << " "<< d <<endl;
                ll dd = x/d;
                if(i+dd<=n){
                cout << i << " "<< dd << " "<< n-(i+dd)<<endl;
                break;
                }
            }
            if(y%w==0)
            {
                pos = true;
                ll ww = y/w;
                if(ww+j<=n){
                cout << ww << " "<< j << " "<< n-(ww+j)<<endl;
                break;
                }
            }
        }
        if(!pos)
        {
            cout << "-1\n";
        }
        }
    return 0;
}
