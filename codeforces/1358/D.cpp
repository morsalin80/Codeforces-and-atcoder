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
    ll n,x;
    cin>>n>>x;
    ll arr[2*n+1];
    for(int i=1;i<=n;i++)cin>>arr[i];
    for(int i=n+1;i<=2*n;i++)arr[i]=arr[i-n];
    ll pre1[2*n+1],pre2[2*n+1];
    ms(pre1);
    ms(pre2);
    for(int i=1;i<=2*n;i++){
        pre1[i]=pre1[i-1]+((arr[i]*(arr[i]+1))/2);
        pre2[i]=pre2[i-1]+(arr[i]);
    }
    ll maxm=0;
    for(int i=2*n;i>=n+1;i--){
        ll low=1;
        ll high=i;
        ll ans = i;
        while(low<=high){
            ll mid=(low+high)/2;
            if(pre2[i]-pre2[mid]<x){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        ll tx=pre2[i]-pre2[ans-1]-x;
        ll res=pre1[i]-pre1[ans-1];
        res-=(tx*(tx+1))/2;
        maxm=max(res,maxm);
    }
    cout << maxm << endl;
    return 0;
}
///Alhamdulillah
