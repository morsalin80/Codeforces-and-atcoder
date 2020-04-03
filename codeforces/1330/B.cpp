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
    int t;
    ll pre[200005];
    pre[1]=1;
    for(ll i=2;i<200005;i++){
        pre[i]=pre[i-1]+i;
        //cout << pre[i] << endl;
    }
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll  arr[n+1];
        ll pr[n+2],sf[n+2];
        ll dsp[n+2],dsf[n+2];
        dsp[0]=0;dsf[n+1]=0;
        pr[0]= 0;sf[n+1]=0;
       // for(int i=1;i<=n;i++)cout << pre[i] << " ";
      //  cout << endl;
      set<ll>st;
        for(int i=1;i<=n;i++){
            cin>>arr[i];
            st.ins(arr[i]);
            pr[i] = pr[i-1]+arr[i];
         //   cout << pr[i] << " ";
            dsp[i]=st.size();
        }
        st.clear();
       // cout << endl;
        for(int i=n;i>=1;i--){
            sf[i]=sf[i+1]+arr[i];
            st.ins(arr[i]);
            //cout << sf[i] << " ";
            dsf[i]=st.size();
        }
       // cout << endl;
        vector<pair<ll,ll> > vp;
        for(int i=1;i<=n;i++){
         //   cout << pr[i] << " "<< dsp[i] << " " << " "<< sf[i+1] << " "<< dsf[i+1] <<endl;
            if(pre[i]==pr[i] && sf[i+1]==pre[n-i] && dsp[i]==i && dsf[i+1]==n-i) vp.pb(mp(i,n-i));
        }
        cout << vp.size()<<endl;
        for(int i=0;i<(int)vp.size();i++){
            cout << vp[i].first << " "<< vp[i].second<<endl;
        }
    }
    return 0;
}
///Alhamdulillah
