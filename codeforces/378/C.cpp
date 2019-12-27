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
int n,m,k,dot=0;
char arr[505][505];
int mark[505][505];
int cnt=0;
void init()
{
    for(int i=0;i<505;i++)
    {
        for(int j=0;j<505;j++)
        {
            mark[i][j] = 0;
        }
    }
    cnt = 1;
}
void dfs(int x,int y)
{
    if(dot-cnt==k) return;
    mark[x][y] = 1;
    cnt++;
    for(int i=0;i<4;i++)
    {
        int nx = x+dx4[i];
        int ny = y+dy4[i];
        if(nx>=0 && nx <n && ny>=0 && ny<m && arr[nx][ny]=='.' && mark[nx][ny]==0)
        {
            dfs(nx,ny);
        }
    }
}
int main()
{
	IOS
    cin>>n>>m>>k;
    int lastx=-1,lasty=-1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]=='.') { lastx = i;lasty=j;dot++;}
        }
    }
    dfs(lastx,lasty);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]!='#' && mark[i][j]==0)
            cout<< 'X';
            else
                cout << arr[i][j];
        }
        cout << endl;
    }
    return 0;
}
///Alhamdulillah
