
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
    if(a.first==b.first) return a.second<b.second;
    return a.first>b.first;
}
vector<int>adj[200005];
int level[200005];
int sub[200005];
map<int,vector<int> >fre;
void dfs(int now,int parent,int lv){
    level[now] = lv;
    sub[now] = 1;
    for(int i=0;i<adj[now].size();i++){
        int u=adj[now][i];
        if(u==parent) continue;
        level[u] = lv+1;
        dfs(u,now,level[u]);
        sub[now]+=sub[u];
    }
}
int main()
{
    IOS
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    dfs(1,0,1LL);
    vector<ll>vc;
    for(int i=1;i<=n;i++){
        vc.pb(level[i]-(sub[i]-1));
    }
    sort(vc.begin(),vc.end(),greater<ll>());
    ll sum=0;
    for(int i=0;i<k;i++){
        sum+=vc[i];
    }
    cout << sum-k << endl;
}
///Alhamdulillah
