/// Bismillahir Rahmanir Rahim

#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define ALL(v) v.begin(),v.end()
#define f0(n) for(int i=0;i<n;i++)
#define ms(x) memset(x,0,sizeof(x))
#define ins insert
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
ll arr[3][100005],dp[3][100005];
ll n;
ll func(int state,int ind)
{
    if(ind>n) return 0;
    if(dp[state][ind]!=0)
        return dp[state][ind];
    ll res1=0,res2=0;
    if(state==0)
    {
        res1= arr[1][ind] + func(1,ind+1);
        res2= func(2,ind+1);
    }
    if(state==1)
    {
        res1 = arr[0][ind] + func(0,ind+1);
        res2 = func(2,ind+1);
    }
    if(state==2)
    {
        res1 = arr[0][ind] + func(0,ind+1);
        res2 = arr[1][ind] + func(1,ind+1);
    }
    return dp[state][ind] = max(res1,res2);
}
int main()
{
	IOS
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>arr[0][i];
    for(int i=1;i<=n;i++)
        cin>>arr[1][i];
    cout << func(2,1)<<endl;
    return 0;
}
///Alhamdulillah
