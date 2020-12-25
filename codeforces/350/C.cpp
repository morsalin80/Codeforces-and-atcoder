#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef vector<pii>vip;
typedef pair< pii, int > ppi;
#define fill(a,b) memset(a,b,sizeof(a))
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a) for(int i=0;i<a;i++)
#define rep1(i,a,b) for(int i=(a);i<=(b);++i)
#define irep(i,b,a) for(int i=(b);i>=(a);--i)
#define minv(v) *min_element(all(v))
#define maxv(v) *max_element(all(v))
#define unq(v) sort(all(v)),(v).erase(unique(all(v)),(v).end())
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define sqr(a) ((a)*(a))
#define sz(a) int(a.size())
#define ff first
#define ss second
#define pb push_back

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int inf = 0x3f3f3f3f;// (int)3e18;
const int maxn = 200005;
 
pii a[maxn];
set<pii>s;

void task(){
    int n; cin >> n;
    rep1(i,1,n){
     cin >> a[i].first >>a[i].second;
     s.insert({abs(a[i].first ) + abs(a [i].second),i});
    } 
    int res = 0;
    for(auto it:s){
        int ind = it.second;
        int x = a[ind].first;
        int y = a[ind].second;
        int distx = abs(x);
        int disty = abs(y);
        if(distx > 0 and disty>0)res+=6;
        else res+=4;
    }
    cout << res << endl;
    for(auto it:s){
        int ind = it.second;
        int x = a[ind].first;
        int y = a[ind].second;
        int distx = abs(x);
        int disty = abs(y);

        if(distx > 0)cout << "1 "<<distx<<' '<<(x>0?"R":"L")<<endl;
        if(disty > 0)cout << "1 "<<disty<<' '<<(y>0?"U":"D")<<endl;
        cout << 2 << endl;
        if(distx > 0)cout << "1 "<<distx<<' '<<(x>0?"L":"R")<<endl;
        if(disty > 0)cout << "1 "<<disty<<' '<<(y>0?"D":"U")<<endl;
        cout << 3 << endl;
    }
}

int main(){
        _
        #ifdef OJ
        freopen("inputf.in", "r", stdin);
        freopen("outputf.in", "w", stdout);
        #endif

        int T = 1; //cin >> T;
        while(T--){
            task();
        }
        
return 0;
}

 