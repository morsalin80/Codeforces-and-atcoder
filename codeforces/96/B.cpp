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

bool sortinrev(const pair<int,int> &a,
               const pair<int,int> &b)
{
       return (a.first > b.first);
}
vector<ll>vec;
void rec(ll x, ll c4 ,ll c7){
    if(x>1e10) return;
    if(x!=0 && c4==c7){
        vec.pb(x);
    }
    rec(x*10+4,c4+1,c7);
    rec(x*10+7,c4,c7+1);
}
int main()
{
    IOS
    rec(0,0,0);
    ll n;
    sort(ALL(vec));
    //for(int i=0;i<(int)vec.size();i++)cout << vec[i] << endl;
    while(cin>>n){
        auto it=lower_bound(ALL(vec),n);
        cout << (*it) << endl;
    }
    return 0;
}
///Alhamdulillah

