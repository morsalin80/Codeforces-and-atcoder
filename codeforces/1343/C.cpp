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
       if(a.first==b.first)return a.second>b.second;
       return a.first>b.first;
}
int main()
{
    IOS
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        vector<pair<ll,ll> >vp;
        ll sum=0;
        ll indi=0;
        bool neg=0;
        ll last=0;
        for(int i=0;i<n;i++){
            if(arr[i]>0 && neg){
                sum+=arr[i];
                neg=0;
                last=arr[i];
            }
            else if(arr[i]<0 && !neg){
                sum+=arr[i];
                neg=1;
                last=arr[i];
            }
            else {
                sum-=last;
                last=max(last,arr[i]);
                sum+=last;
            }
        }
        if(sum==0) sum=indi;
        cout <<sum << endl;
    }
    return 0;
}
///Alhamdulillah
