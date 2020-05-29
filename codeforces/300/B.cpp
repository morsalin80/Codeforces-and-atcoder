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
int root_arr[50];
int size_arr[50];
int root(int a){
    while(a!=root_arr[a]){
        a=root_arr[root_arr[a]];
    }
    return a;
}
void w_u(int a,int b){
    int roota=root(a);
    int rootb=root(b);
    if(roota==rootb)return;
    if(size_arr[roota]>size_arr[rootb]){
        root_arr[rootb]=root_arr[roota];
        size_arr[roota]+=size_arr[rootb];
    }
    else{
        root_arr[roota]=root_arr[rootb];
        size_arr[rootb]+=size_arr[roota];
    }
   // cout << size_arr[roota]<< " rooting "<< size_arr[rootb] << endl;
}
int main()
{
    IOS
    for(int i=1;i<50;i++){
        root_arr[i]=-1;
        size_arr[i]=1;
    }
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        if(root_arr[u]==-1)root_arr[u]=u;
        if(root_arr[v]==-1)root_arr[v]=v;
        w_u(u,v);
    }
    bool pos=1;
    for(int i=1;i<=n;i++){
        if(root_arr[i]==-1){
            root_arr[i]=i;
            for(int j=1;j<=n;j++){
                if(i==j)continue;
                if(root_arr[j]==-1)continue;
                int rootj=root(j);
                if(size_arr[rootj]<3)
                {
                    w_u(i,j);
                    break;
                }
            }
        }
        int rooti=root(i);
      //  cout << rooti << " "<< size_arr[rooti] << endl;
        if(size_arr[rooti]>3){
            pos=0;
         //   cout << i << " "<< rooti << " "<< size_arr[rooti] << endl;
            break;
        }
    }
    if(pos){
        map<int,vector<int> > mv;
        for(int i=1;i<=n;i++){
            int rooti=root(i);
            if(size_arr[rooti]!=3){
          //      cout << "pos scope: ";
                cout << -1 << endl;
                return 0;
            }
            mv[rooti].pb(i);
        }
        for(auto it=mv.begin();it!=mv.end();it++){
            vector<int>vec=it->se;
            for(int i=0;i<(int)vec.size();i++)cout << vec[i] << " ";
            cout << endl;
        }
    }
    else cout << "-1" << endl;
    return 0;
}
///Alhamdulillah

