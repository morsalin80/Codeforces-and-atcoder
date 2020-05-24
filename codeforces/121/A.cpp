/// Bismillahir Rahmanir Rahim
/* Author: Mohammad Morsalin (aka white_space)
    Dept of ICE, NSTU
*/
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define endl "\n"
#define f0(n) for(int i=0;i<n;i++)
#define ms(x) memset(x,0,sizeof(x))
#define ins insert
#define ALL(v) v.begin(),v.end()
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

bool sortinrev(const pair<int,int> &a,
               const pair<int,int> &b)
{
       return (a.first > b.first);
}
int main()
{
    IOS
    ll l,r;
    queue<ll> q;
    q.push(4);
    q.push(7);
    ll large=7;
    vector<ll> vec;
    while(large<1e10){
        ll x=q.front();
        q.pop();
        vec.pb(x);
        q.push(x*10 +4);
        q.push(x*10 +7);
        large=x*10 +7;
    }
    while(!q.empty()){
        vec.pb(q.front());
        q.pop();
    }
    sort(ALL(vec));
    while(cin>>l>>r){
        auto it=lower_bound(vec.begin(),vec.end(),l);
        ll ans=0;
        bool fs=0;
        for(;it!=vec.end();it++){
           // cout << *it << endl;
            ll xx=(min(*it,r)-l);
            if(!fs)xx++;
            fs=1;
            ans+=xx*(*it);
            if(*it>=r){
                break;
            }
            l=*it;
        }
        cout << ans << endl;
    }
    return 0;
}
///Alhamdulillah
