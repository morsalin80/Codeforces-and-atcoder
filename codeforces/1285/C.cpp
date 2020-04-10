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
int main()
{
    IOS
    ll x;
    cin>>x;
    vector<ll>vp;
    ll temp=x;
   // cout << x << endl;
    for(ll i=2;i*i<=x;i++){
        //ll cnt=0;
        if(x%i==0){
        ll w=1;
        while(x%i==0){
            x/=i;
            w*=i;
        }
        vp.pb(w);
        }
      /// cout << w << " " << x << endl;

    }
    if(x>1)vp.pb(x);
   // sort(vp.begin(),vp.end());
   // vector<pair<ll,ll> > ans;
    int sz=vp.size();

    ll alf=highest(ll),art=highest(ll);
   // if(vp.size()==1) {cout << temp/vp[0] << " "<<vp[0] << endl; continue;}
    for(int i=0;i<(1<<sz);i++){
        ll lf=1,rt=1;
        for(int j=0;j<sz;j++){
        if((i>>j)&1) lf*=vp[j];
        else rt*=vp[j];
      //  cout << lf << " "<< rt << endl;
        }
        if(max(lf,rt)<max(alf,art)){
            alf=lf;
            art=rt;
        }
    }
    cout << alf << " "<< art << endl;
    return 0;
}
///Alhamdulillah
