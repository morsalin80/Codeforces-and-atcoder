/// Bismillahir Rahmanir Rahim

#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
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
    int n;
    cin>>n;
    vector<pair<ll,ll> > v;
    map<ll,ll>flag;
    map<ll,vector<ll> > mm;
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        v.pb(mp(x,0));
        flag[x]=1;
    }
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        v[i].second=x;
        mm[v[i].first].pb(x);
    }
    multiset<ll>adder;
    ll add=0,ans=0;
    for(auto it=mm.begin();it!=mm.end();it++)
    {
        vector<ll> &v=it->second;
        for(ll x1:v){
            adder.insert(x1);
            add+=x1;
        }
        ll x = it->first;
        flag[x] = 0;
        while(flag[x]==0 && adder.size()){
            auto it1=adder.end();
            it1--;
            ll y = *it1;
            add-=y;
            adder.erase(it1);
            x++;
            ans+=add;
        }
    }
    cout << ans << endl;
    return 0;
}
///Alhamdulillah
