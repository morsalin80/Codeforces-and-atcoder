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
int main()
{
    IOS
    ll r,g,b;
    cin>>r>>g>>b;
    ll ans;
    if(r==0||g==0||b==0){
        ans=r/3+g/3+b/3;
    }
    else{
        ans=r/3+g/3+b/3;
        ll i,j,k;
        i=r%3;
        j=g%3;
        k=b%3;
        ll w=i+j+k;
        ans+=(min(min(i,j),k));
        if(w==4 &&(i==0 || j==0|| k==0))ans++;
    }
    cout << ans << endl;
    return 0;
}
///Alhamdulillah

