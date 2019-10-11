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
ll dx[] = {1,0,-1,-1,0,1};
ll dy[] = {0,1,1,0,-1,-1};
int main()
{
	IOS
    ll n,x,y;
    cin>>x>>y;
    cin>>n;
    n--;
    n%=6;
    ll ans = x*dx[n] + y*dy[n];
    ans%=MOD;
    if(ans<0) ans+=MOD;
    cout << ans << endl;
    return 0;
}
