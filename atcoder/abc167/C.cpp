/// Bismillahir Rahmanir Rahim
/* Author: Mohammad Morsalin (aka white_space)
    Dept of ICE, NSTU
*/
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
//#define endl "\n"
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

bool sortinrev(const pair<double,pair<ll,ll> >&a,
               const pair<double,pair<ll,ll> >&b)
{
        if(a.first==b.first) return a.second.first<b.second.first;
       return (a.first > b.first);
}
int main()
{
  //  IOS
    int n,m,x;
    while(cin>>n>>m>>x){
        //vector<pair<ll,ll> > vp[m];
        ll cost[n];
        ll arr[n][m];
        for(int i=0;i<n;i++){
            cin>>cost[i];
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
            }
        }
        ll res=highest(ll);
        for(int bit=0;bit<(1<<n);bit++){
            int temp[m];
            ms(temp);
            ll price=0;
            for(int i=0;i<n;i++){
                if((bit>>i)& 1){
                    price+=cost[i];
                    for(int j=0;j<m;j++){
                        temp[j]+=arr[i][j];
                    }
                }
            }
            bool ok=1;
            for(int i=0;i<m;i++){
                if(temp[i]<x){
                    ok=0;
                    break;
                }
            }
            if(ok)res=min(res,price);
        }
        if(res==highest(ll))cout << "-1\n";
        else cout << res << endl;
    }
    return 0;
}
///Alhamdulillah
