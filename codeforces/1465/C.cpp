#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int maxn=100005;
vector<int>adj[maxn];
ll ans;
int vis[maxn];
int loop_checker;
void init(){
    for(int i=0;i<maxn;i++){
        adj[i].clear();
        vis[i]=0;
    }
    ans=0;
}
void dfs(int u){
    if(loop_checker==u)///loop found
    {
        ans++;
        return;
    }
    if(vis[u]!=0)return;
    vis[u]++;
    if(adj[u].size()>0)ans++,dfs(adj[u][0]);
}
void solve(){
    init();
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        if(x==y)continue;
        adj[x].push_back(y);
    }
    for(int i=1;i<=n;i++){
        if(adj[i].size()==0)continue;
        if(vis[i]!=0)continue;
        ans++;
        loop_checker=i;
        vis[i]++;
        dfs(adj[i][0]);
    }
    cout << ans << endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
