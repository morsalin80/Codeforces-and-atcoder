#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define f0(n) for(int i=0;i<n;i++)
#define ms(x) memset(x,0,sizeof(x))
#define ins insert
#define IOS ios::sync_with_stdio(false);
using namespace std;
bool sortinrev(const pair<int,int> &a,
               const pair<int,int> &b)
{
       return (a.first > b.first);
}
int n,m;
vector<int>edg[100005];
int vis[100005];
void init(){
    for(int i=0;i<100005;i++) edg[i].clear();
    ms(vis);
}
void bfs(int st){
    queue<int>qq;
    qq.push(st);
    while(!qq.empty()){
        int u=qq.front();
        vis[u]=1;
        qq.pop();
        for(int i=0;i<edg[u].size();i++){
            if(!vis[edg[u][i]]){
                qq.push(edg[u][i]);
            }
        }
    }
}
int main()
{
	IOS
	 n,m;
	while(cin>>n>>m){
            init();
        vector<pair<ll,int>>vec;
        for(int i=1;i<=n;i++){
            ll a;
            cin>>a;
            vec.pb({a,i});
        }
        while(m--){
            int u,v;
            cin>>u>>v;
            edg[u].pb(v);
            edg[v].pb(u);
        }
        sort(vec.begin(),vec.end());
        ll ans=0;
        for(int i=0;i<n;i++){
            if(!vis[vec[i].second]){
                ans+=vec[i].first;
                bfs(vec[i].second);
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}

