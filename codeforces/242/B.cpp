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

bool sortinrev(const pair<int,pair<int,int > > &a,
               const pair<int,pair<int,int > > &b)
{
        if(a.second.first==b.second.first) return a.first<b.first;
       return (a.second.first > b.second.first);
}
int main()
{
    IOS
    int n;
    while(cin>>n){
        vector<pair<int,pair<int,int > > > vp;
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            vp.pb(mp(x,mp(y,i+1)));
        }
        sort(ALL(vp),sortinrev);
        int l=vp[0].first,r=vp[0].second.first;
        bool pos=1;
        int ans=vp[0].second.second;
        for(int i=1;i<n;i++){
            if(vp[i].first<l){
                pos=0;
                break;
            }
        }
        if(pos)cout << ans << endl;
        else cout << "-1\n";
    }
    return 0;
}
///Alhamdulillah
