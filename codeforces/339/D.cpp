/// Bismillahir Rahmanir Rahim
/* Mohammad Morsalin
   Dept of ICE, NSTU
*/
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ll long long
#define pb push_back
#define mp make_pair
#define endl "\n"
#define int long long
#define f0(n) for(int i=0;i<n;i++)
#define ms(x) memset(x,0,sizeof(x))
#define ms2d(x,m,n) memset(x, 0, sizeof(x[0][0]) * m * n)
#define uniq(vec) vec.resize(distance(vec.begin(),unique(vec.begin(),vec.end())))
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define pi pair<int,int>
#define tc(t) int t;cin>>t;while(t--)
#define bits(n) __builtin_popcount(n)
#define maxpq priority_queue<int>
#define minpq priority_queue<int, vector<int>, greater<int> >
#define ins insert
#define ALL(v) v.begin(),v.end()
#define highest(x) numeric_limits<x>::max()
#define lowest(x) numeric_limits<x>::min()
#define Inf INFINITY
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define fi first
#define se second
#define PI acos(-1)
#define sz(a) (int)a.size();
#define IOS ios::sync_with_stdio(false);
using namespace std;
int gcd(int a, int b) { if (a == 0) return b; return gcd(b % a, a);}
typedef tree<pair<int, int>,null_type,less<pair<int, int>>,rb_tree_tag,tree_order_statistics_node_update> ordered_multiset;
int dx8[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dy8[] = {1,-1, 1, -1, 0, 0, -1, 1};
int dx4[] = {0, 0, 1, -1};
int dy4[] = {1, -1, 0, 0};
const long long MOD = 1000000007;
double sq(double x) {return x*x;}
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
const int maxn=400005;
int arr[maxn];
int segTree[maxn];
void build(int l,int r,int pos,int op_type){
    if(l==r){
        segTree[pos]=arr[l];
        return;
    }
    int mid=(l+r)/2;
    build(l,mid,2*pos+1,!op_type);
    build(mid+1,r,2*pos+2,!op_type);
    if(op_type==1){
        segTree[pos]=segTree[2*pos+1] | segTree[2*pos+2];
    }
    else segTree[pos]=segTree[2*pos+1] ^ segTree[2*pos+2];

}
void update(int l,int r,int ind,int pos,int value,int op_type){
    if(l>r)return;
    if(l==r && l==ind){
        segTree[pos]=value;
        return;
    }
    int mid=(l+r)/2;
    if(l<=ind && ind<=mid){
        update(l,mid,ind,2*pos+1,value,!op_type);
    }
    else{
        update(mid+1,r,ind,2*pos+2,value,!op_type);
    }
    if(op_type==1){
        segTree[pos]=segTree[2*pos+1] | segTree[2*pos+2];
    }
    else{
        segTree[pos]=segTree[2*pos+1] ^ segTree[2*pos+2];
    }
}
signed main()
{
    IOS
    int n,m;
    cin>>n>>m;
    int lim=pow(2,n);
    for(int i=0;i<lim;i++){cin>>arr[i];}
    int operation;
    if(n%2==0)operation=0;
    else operation=1;
    build(0,lim-1,0,operation);
    while(m--){
        int p,b;
        cin>>p>>b;
        p--;
        update(0,lim-1,p,0,b,operation);
        cout << segTree[0] << endl;
    }
    return 0;
}
///Alhamdulillah
