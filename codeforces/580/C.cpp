#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define f0(n) for(int i=0;i<n;i++)
#define ms(x) memset(x,0,sizeof(x))
#define ins insert
#define IOS ios::sync_with_stdio(false);
#define maxx 100005
using namespace std;
vector <int> adj[maxx];
int cat[maxx];
int vis[maxx];
int cnt=0;
int n,m;
void dfs(int n,int c)
{
    vis[n]=1;
    for(int i=0;i<adj[n].size();i++)
    {

        if(!vis[adj[n][i]])
        {
            if(adj[adj[n][i]].size()==1) ///leaf node;
            {
                if(c+cat[adj[n][i]]<=m){
               // cout << adj[n][i] <<endl;
                cnt++;
                vis[adj[n][i]] = 1;
                }
            }
            else
            {
                if(cat[adj[n][i]] && c+1<=m)
                    dfs(adj[n][i],c+1);
                else if(!cat[adj[n][i]]) dfs(adj[n][i],0);
            }
        }
    }
}
int main()
{
	IOS
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>cat[i];
    for(int i=0;i<n-1;i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    dfs(1,cat[1]);
    cout << cnt <<endl;
    return 0;
}

