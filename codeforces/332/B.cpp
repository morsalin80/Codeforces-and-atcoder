/// Bismillahir Rahmanir Rahim
/* Author: Mohammad Morsalin
    Dept of ICE, NSTU
*/
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define endl "\n"
#define f0(n) for(int i=0;i<n;i++)
#define tc(t) int t;cin>>t; while(t--)
#define prec(n) fixed<<setprecision(n)
#define maxpq priority_queue<int>
#define minpq priority_queue<int,vector<int>,greater<int> >
#define ms(x) memset(x,0,sizeof(x))
#define ins insert
#define ALL(v) v.begin(),v.end()
#define ii pair<int,int>
#define vii vector<ii>
#define fi first
#define se second
#define none(n)  __builtin_popcount(n);
#define highest(x) numeric_limits<x>::max()
#define lowest(x) numeric_limits<x>::min()
#define Inf INFINITY
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define PI acos(-1)
#define IOS ios::sync_with_stdio(false);
using namespace std;
int dx8[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dy8[] = {1,-1, 1, -1, 0, 0, -1, 1};
int dx4[] = {0, 0, 1, -1};
int dy4[] = {1, -1, 0, 0};
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

bool sortinrev(const pair<ll,ll> &a,
               const pair<ll,ll> &b)
{
    if(a.fi==b.fi)return a.se<b.se;
    return (a.first > b.first);
}
ll pre[200005];
ll gtsum(ll l,ll r){
    return (l==0)? pre[r]: (pre[r]-pre[l-1]);
}
int main()
{
    IOS
    int n,k;
    cin>>n>>k;
    ll arr[n];

    ms(pre);
    cin>>arr[0];
    pre[0]=arr[0];
    for(int i=1;i<n;i++){
        cin>>arr[i];
        pre[i]=pre[i-1]+arr[i];
    }
    ll ans_sum=gtsum(n-2*k,n-k-1)+gtsum(n-k,n-1);
    pair<ll,ll>ans={n-2*k,n-k};
    pair<ll,ll>maxx={n-k,gtsum(n-k,n-1)};
    for(int i=n-2*k -1;i>=0;i--){
        ll tot=gtsum(i+k,i+2*k -1);
        if(tot>=maxx.se){
            maxx={i+k,tot};
        }
        ll xx = gtsum(i,i+k-1)+maxx.se;
        if(xx>=ans_sum){
            ans={i,maxx.fi};
            ans_sum=xx;
        }
    }
    cout << ans.fi+1 << " "<< ans.se+1;
    return 0;
}
///Alhamdulillah
