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

int arr[102];
int size[102];
int root(int a){
    while(arr[a]!=a){
        a=arr[a];
    }
    return a;
}
void w_u(int a,int b){
    int roota=root(a);
    int rootb=root(b);
    if(roota==rootb) return ;
    if(size[roota]>size[rootb]){
        arr[rootb]=arr[roota];
        size[roota]+=size[rootb];
    }
    else{
        arr[roota]=arr[rootb];
        size[rootb]+=size[roota];
    }
}
int main()
{
    IOS
    int n,m;
    cin>>n>>m;
    vector<int>vec[n+1];
    for(int i=0;i<=100;i++){arr[i]=i;size[i]=0;}
    int zc=0;
    for(int i=1;i<=n;i++){
        int k;
        cin>>k;
        if(k==0)zc++;
        for(int j=0;j<k;j++){
            int x;
            cin>>x;
            vec[i].pb(x);
        }
    }
    for(int i=1;i<=n;i++){
       for(int j=0;j<(int)vec[i].size();j++){
          for(int k=0;k<(int)vec[i].size();k++){
            if(j==k)continue;
            w_u(vec[i][j],vec[i][k]);
          }
       }
    }
    set<int>st;
    for(int i=1;i<=n;i++){
        if(vec[i].size()>0)st.ins(root(vec[i][0]));
    }
    cout << zc+ max((int)st.size()-1,0) << endl;
    return 0;
}
///Alhamdulillah
