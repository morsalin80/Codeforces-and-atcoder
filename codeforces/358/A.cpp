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

bool sortinrev(const pair<int,int> &a,
               const pair<int,int> &b)
{
       return (a.first > b.first);
}
int main()
{
    IOS
    int n;
    while(cin>>n){
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        vector<pair<int,int> >vp;
        for(int i=1;i<n;i++){
            int maxx=max(arr[i],arr[i-1]);
            int mini = min(arr[i],arr[i-1]);
            vp.pb(mp(mini,maxx));
        }
        bool ok=0;
        for(int i=1;i<n;i++){
            int x1=min(arr[i],arr[i-1]);
            int x2=max(arr[i],arr[i-1]);
            int x3,x4;
            for(int i=0;i<vp.size();i++){
                x3=vp[i].first;
                x4=vp[i].second;
                if(x1==x3 && x2==x4)continue;
                if((x1<x3 && x3<x2 && x2<x4) || (x3<x1 && x1<x4 && x4<x2)){
                  ok=1;
                  break;
                }
            }
            if(ok)break;
        }
        if(ok)cout << "yes\n";
        else cout << "no\n";
    }
    return 0;
}
///Alhamdulillah
