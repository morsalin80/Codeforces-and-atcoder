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
signed main()
{
    IOS
    int n,m,k;
    while(cin>>n>>m>>k){
        vector<pair<pair<int,int>,int >  > vp;
        for(int i=0;i<k;i++){
            int t,c,p;
            cin>>t>>c>>p;
            c--;
            vp.pb(mp(mp(t,c),p));
        }
        int row[n],col[m];
        ms(row);ms(col);
        vector<pair<int,int> > tp;
        for(int i=(int)vp.size()-1;i>=0;i--){
            int t=vp[i].fi.fi;
            int c=vp[i].fi.se;
            int p=vp[i].se;
            if(t==1){
                if(row[c]==0){
                    tp.pb(mp(t,c));
                    row[c]=p;
                }
            }
            if(t==2){
               if(col[c]==0){
                    tp.pb(mp(t,c));
                    col[c]=p;
               }
            }
        }
        int ans[n][m];
        ms2d(ans,n,m);
        for(int i=(int)tp.size();i>=0;i--){
            int t=tp[i].fi;
            int c=tp[i].se;
            if(t==1){
                for(int j=0;j<m;j++){
                    ans[c][j]=row[c];
                }
            }
            if(t==2){
                for(int j=0;j<n;j++){
                    ans[j][c]=col[c];
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }

    }
    return 0;
}
///Alhamdulillah
