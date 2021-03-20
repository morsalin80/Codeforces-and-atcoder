// Problem: D - Poker
// Contest: AtCoder - Caddi Programming Contest 2021(AtCoder Beginner Contest 193)
// URL: https://atcoder.jp/contests/abc193/tasks/abc193_d
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

/// Bismillahir Rahmanir Rahim
/* Mohammad Morsalin
   Dept of ICE, NSTU
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define f0(n) for(int i=0;i<n;i++)
#define ms(x) memset(x,0,sizeof(x))
#define CLR(x) memset(x, -1, sizeof(x))
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
int lcm(int a,int b) {return (a*b)/gcd(a,b);}
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
void solution(){
    ll power[12];
    power[0]=1;
    for(int i=1;i<12;i++)power[i]=power[i-1]*10;
    ll k;
    string s,t;
    cin>>k>>s>>t;
    map<int,int>mm1,mm2;
    for(auto u:s){
    	mm1[u-'0']++;
    }
    for(auto u:t){
    	mm2[u-'0']++;
    }
    ll ans=0;
    for(int a=1;a<=9;a++){
    	for(int b=1;b<=9;b++){
    		mm1[a]++;
    		mm2[b]++;
    		bool chole=1;
    		for(int i=1;i<=9;i++){
    			if(mm1[i]+mm2[i]>k){
    				chole=0;
    			}
    		}
    		if(chole){
    			if(a!=b){
    				ll x=0,y=0;
    				for(ll i=1;i<=9;i++){
    					x+=i*power[mm1[i]];
    				}
    				for(ll i=1;i<=9;i++){
    					y+=i*power[mm2[i]];
    				}
    				mm1[a]--;
    				mm2[b]--;
    				if(x>y){
    					ans+=(k-mm1[a]-mm2[a])*(k-mm1[b]-mm2[b]);
    				}
    			}
    			else{
    				ll x=0,y=0;
    				for(ll i=1;i<=9;i++){
    					x+=i*power[mm1[i]];
    				}
    				for(ll i=1;i<=9;i++){
    					y+=i*power[mm2[i]];
    				}
    				mm1[a]--;
    				mm2[b]--;
    				if(x>y){
    					ans+=(k-mm1[a]-mm2[a])*(k-mm1[a]-mm2[a]-1);
    				}
    			}
    		}
    		else{
    			mm1[a]--;
    			mm2[b]--;
    		}
    	}
    }
    ll mot=9*k-8;
    mot=mot*(mot-1);
    cout << fixed << setprecision(15) << ans*1.0/mot;
}
signed main()
{
    IOS
    int t;
    t=1;
    //cin>>t;
    while(t--){
        solution();
    }
    return 0;
}
///Alhamdulillah

