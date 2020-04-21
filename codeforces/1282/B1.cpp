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
    cin>>t;
    while(t--){
        ll n,p,k;
        cin>>n>>p>>k;
        ll arr[n+1];
        arr[0]=0;
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n+1);
        ll sum=0;
        int cnt=0;
        int pre[n+1];
        pre[0]=0;
        pre[1] = arr[1];
        for(int i=2;i<=n;i++){
            pre[i] = arr[i]+pre[i-2];
        }
        int ans=0;
        for(int i=1;i<=n;i++){
          //  cout << pre[i] << endl;
            if(pre[i]>p) {
                ans=i-1;
                break;
            }
            if(i==n) ans=i;
        }
        cout << ans << endl;
    }
    return 0;
}
///Alhamdulillah
