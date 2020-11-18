/// Bismillahir Rahmanir Rahim
/* Mohammad Morsalin
   Dept of ICE, NSTU
*/
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define endl "\n"
#define int long long
#define f0(n) for(int i=0;i<n;i++)
#define ms(x) memset(x,0,sizeof(x))
#define ms2d(x,m,n) memset(x, 0, sizeof(x[0][0]) * m * n)
#define CLR(x) memset(x, -1, sizeof(x))
#define CLR2d(x,m,n) memset(x, -1, sizeof(x[0][0]) * m * n)
#define uniq(vec) vec.resize(distance(vec.begin(),unique(vec.begin(),vec.end())))
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define pi pair<int,int>
#define rep(i,a) for(int i=0; i<a;i++)
#define rep1(i,a,b) for(int i=(a);i<=(b);++i)
#define irep(i,b,a) for(int i=(b);i>=(a);--i)
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

///for debug
vector<string> vec_splitter(string s) {    s += ',';vector<string> res;while(!s.empty()) {res.push_back(s.substr(0, s.find(',')));s = s.substr(s.find(',') + 1);}return res;}
void debug_out( vector<string> __attribute__ ((unused)) args,__attribute__ ((unused)) int idx,__attribute__ ((unused)) int LINE_NUM) { cerr << endl; }
template <typename Head, typename... Tail>
void debug_out(vector<string> args, int idx, int LINE_NUM, Head H, Tail... T) { if(idx > 0) cerr << ", "; else cerr << "Line(" << LINE_NUM << ") ";stringstream ss; ss << H;cerr << args[idx] << " = " << ss.str();debug_out(args, idx + 1, LINE_NUM, T...);}
#define XOX
#ifdef XOX
#define debug(...) debug_out(vec_splitter(#__VA_ARGS__), 0, __LINE__, __VA_ARGS__)
#else
#define debug(...) 42
#endif
///debug template ends


int gcd(int a, int b) { if (a == 0) return b; return gcd(b % a, a);}
typedef tree<pair<int, int>,null_type,less<pair<int, int>>,rb_tree_tag,tree_order_statistics_node_update> ordered_multiset;
int dx8[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dy8[] = {1,-1, 1, -1, 0, 0, -1, 1};
int dx4[] = {0, 0, 1, -1};
int dy4[] = {1, -1, 0, 0};
const long long MOD = 1000000007;
double sq(double x) {return x*x;}
typedef vector<int> vi;
typedef vector<pair<int,int>> vpii;
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
///modular arithmetic
inline void normal(ll &a) { a %= MOD; (a < 0) && (a += MOD); }
inline ll modMul(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a*b)%MOD; }
inline ll modAdd(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a+b)%MOD; }
inline ll modSub(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); a -= b; normal(a); return a; }
inline ll modPow(ll b, ll p) { ll r = 1; while(p) { if(p&1) r = modMul(r, b); b = modMul(b, b); p >>= 1; } return r; }
inline ll modInverse(ll a) { return modPow(a, MOD-2); }  /// When MOD is prime.
inline ll modDiv(ll a, ll b) { return modMul(a, modInverse(b)); }
///modular arithmetic template ends

bool sortinrev(const pair<int,int> &a,
               const pair<int,int> &b)
{
       return (a.first > b.first);
}

///solution
///this solution is inspired from Peregrine_Falcon 's solution
int n,m;
char str[150][150];

int numberOfOne(int i,int j){
    int cnt=0;
    if(str[i][j]=='1')cnt++;
    if(str[i][j+1]=='1')cnt++;
    if(str[i+1][j]=='1')cnt++;
    if(str[i+1][j+1]=='1')cnt++;
    return cnt;
}
vector<pair<int, pair<int,int > > > zeroOneCheck(int i,int j){
    vector<pair<int, pair<int,int > > >vec;
    if(str[i][j]=='1')vec.pb(mp(1,mp(i,j)));
    else vec.pb(mp(0,mp(i,j)));
    if(str[i][j+1]=='1')vec.pb(mp(1,mp(i,j+1)));
    else vec.pb(mp(0,mp(i,j+1)));
    if(str[i+1][j]=='1')vec.pb(mp(1,mp(i+1,j)));
    else vec.pb(mp(0,mp(i+1,j)));
    if(str[i+1][j+1]=='1')vec.pb(mp(1,mp(i+1,j+1)));
    else vec.pb(mp(0,mp(i+1,j+1)));
    return vec;
}
void solution(){
    cin>>n>>m;
    for(int i=0;i<n;i++)cin>>str[i];
    deque<pair<int,int> > q;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<m-1;j++){
            while(1){
                int cnt=numberOfOne(i,j);
                //debug(cnt);
                if(!cnt)break;
                vector<pair<int,pair<int,int> > > indexes=zeroOneCheck(i,j);
                if(cnt==1){
                    /*0 0
                      1 0
                      we can capitalized by choosing 1 and other 2 elements of this square then
                      it will become as like cnt == 2*/
                    int one=1,zero=2;
                    while(!indexes.empty()){
                        if(indexes.back().fi==0 && zero>0){
                            ///taking this zero
                            zero--;
                            q.push_back(mp(indexes.back().se.fi,indexes.back().se.se));
                        }
                        else if(indexes.back().fi==1 && one>0){
                            ///taking this one
                            one--;
                            q.push_back(mp(indexes.back().se.fi,indexes.back().se.se));
                        }
                        indexes.pop_back();
                    }
                }
                if(cnt==2){
                    /*  1 0
                        0 1
                    we can capitalized by taking 1 one and two zero's and it will become
                    as like cnt==3*/
                    int one=1,zero=2;
                    while(!indexes.empty()){
                        if(indexes.back().fi==1 && one>0){
                            one--;
                            q.pb(mp(indexes.back().se.fi,indexes.back().se.se));
                        }
                        else if(indexes.back().fi==0 && zero>0){
                            zero--;
                            q.pb(mp(indexes.back().se.fi,indexes.back().se.se));
                        }
                        indexes.pop_back();
                    }
                }
                if(cnt==3){
                    /*  1 1
                        1 0
                    if we take only one's it will be zero in one operation*/
                    while(!indexes.empty()){
                        if(indexes.back().fi==1){
                            q.pb(mp(indexes.back().se.fi, indexes.back().se.se));
                        }
                        indexes.pop_back();
                    }
                }
                if(cnt==4){
                    /*  1 1
                        1 1
                    if we take 3 ones it will become as like cnt==1*/
                    int one=3;
                    while(!indexes.empty()){
                        if(indexes.back().fi==1 && one>0){
                            one--;
                            q.pb(mp(indexes.back().se.fi, indexes.back().se.se));
                        }
                        indexes.pop_back();
                    }
                }
                ///now changing the string corresponding to the changes we made above
                int w=3;
                for(int k=(int)q.size()-1;w>0;w--,k--){
                    if(str[q[k].fi][q[k].se]=='1')str[q[k].fi][q[k].se]='0';
                    else str[q[k].fi][q[k].se]='1';
                }
            }
        }
    }
    ///number of the operation will be q.size/3 because always we putted 3 indexes in a row.
    cout << q.size()/3 << endl;
    for(int i=0;i<(int)q.size();i+=3){
        cout << q[i].fi+1 << " "<<q[i].se+1 << " ";
        cout << q[i+1].fi+1 << " "<< q[i+1].se+1 << " ";
        cout << q[i+2].fi+1 << " "<< q[i+2].se+1 <<endl;
    }
}
signed main()
{
    IOS
    int t;
    t=1;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}
///Alhamdulillah
