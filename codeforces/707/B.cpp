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
int n,m,k;
vector<pair<int,int> >adj;
map<pair<int,int>, ll> cost;
int main()
{
	IOS
    cin>>n>>m>>k;
    int mark[n];
    ms(mark);
    while(m--)
    {
        ll u,v;
        cin>>u>>v;
        u--;v--;
        ll l;
        cin>>l;
        adj.pb(mp(u,v));
        adj.pb(mp(v,u));
        if(cost[{u,v}]!=0){cost[{u,v}] = min(l,cost[{u,v}]);
            cost[{v,u}] = min(l,cost[{v,u}]);
        }
        else {cost[{u,v}] = l; cost[{v,u}] = l;}
    }
    vector<ll> vec;
    for(int i=0;i<k;i++)
    {
        int x;
        cin>>x;
        x--;
        mark[x]=1;
    }
    for(int i=0;i<adj.size();i++)
    {
        if((mark[adj[i].first]==1 && mark[adj[i].second]==0) || ((mark[adj[i].first]==0 && mark[adj[i].second]==1)))
        {
            vec.pb(cost[{adj[i].first,adj[i].second}]);
        }
    }
    sort(vec.begin(),vec.end());
    if(vec.empty()) cout<< "-1\n";
    else cout << vec[0] << "\n";
    return 0;
}
///Alhamdulillah
