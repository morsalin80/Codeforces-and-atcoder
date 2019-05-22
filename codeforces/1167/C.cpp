#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define f0(n) for(int i=0;i<n;i++)
#define ms(x) memset(x,0,sizeof(x))
#define ins insert
#define IOS ios::sync_with_stdio(false);
#define maxx 500005
using namespace std;
vector<int>adj[maxx];
vector<int>v;
int cnt;
int vis[maxx];
int ans[maxx];
void dfs(int a)
{
    if(vis[a]==1) return ;
    vis[a] =1;
    cnt++;
    v.pb(a);
    for(int i=0;i<adj[a].size();i++)
    {
        dfs(adj[a][i]);
    }
}
int main()
{
	IOS
    int n,m,ki[maxx];
    cin>>n>>m;
    while(m--)
    {
        int k;
        cin>>k;
        for(int i=0;i<k;i++)
        {
            cin>>ki[i];
            if(i>0)
            {
                adj[ki[i]].pb(ki[i-1]);
                adj[ki[i-1]].pb(ki[i]);
            }
        }
    }
        for(int i=1;i<=n;i++){
            if(!vis[i]){
                cnt = 0;
                dfs(i);
                int s = v.size();
                for(int j=0;j<s;j++)
                {
                    ans[v[j]] = cnt;
                }
                v.clear();
            }
        }
        for(int i=1;i<=n;i++)
        {
            cout << ans[i] <<" ";
        }
        cout<<endl;
}

