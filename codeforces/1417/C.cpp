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
        if(a.fi==b.fi){
            return (a.se<b.se);
        }
       return (a.first < b.first);

}
signed main()
{
    IOS
    tc(t){
        int n;
        cin>>n;
        int arr[n];
        f0(n)cin>>arr[i];
        map<int,int>mm;
        map<int,int>val;
        for(int i=0;i<n;i++){
            int x=mm[arr[i]];
            int w=val[arr[i]];
            mm[arr[i]]=i+1;
            if(i+1-x>w){
                val[arr[i]]=i+1-x;
            }
        }
        for(int i=0;i<n;i++){
            int w=val[arr[i]];
            int x=mm[arr[i]];
            if(w<n+1-x){
                val[arr[i]]=n+1-x;
            }
        }
        vector<pair<int,int> >vp;
        for(auto it=val.begin();it!=val.end();it++){
            int x=it->fi;
            int y=it->se;
            vp.pb(mp(y,x));
        }
        sort(ALL(vp),sortinrev);
        int ans[n];
        for(int i=0;i<n;i++){
            ans[i]=-1;
        }
        int pre=highest(int);
        for(int i=0;i<(int)vp.size();i++){
           // cout << vp[i].fi << " "<< vp[i].se << endl;
            if(ans[vp[i].fi-1]==-1){
                if(pre>vp[i].se){
                   pre=vp[i].se;
                }
                ans[vp[i].fi-1]=pre;
            }
        }
        for(int i=1;i<n;i++){
            if(ans[i]==-1)ans[i]=ans[i-1];
        }
        for(int i=0;i<n;i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
///Alhamdulillah
