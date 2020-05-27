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
ll arr[5005],dp[5005][5005];
int main()
{
    IOS
    ll n,m,k;
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        arr[i]+=arr[i-1];
    }
    for(int i=1;i<=k;i++){
        for(int j=m;j<=n;j++){
            dp[i][j]=max(dp[i][j-1],dp[i-1][j-m]+arr[j]-arr[j-m]);
        }
    }
    cout << dp[k][n] << endl;
    return 0;
}
///Alhamdulillah
