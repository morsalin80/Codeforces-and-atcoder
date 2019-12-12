/// Bismillahir Rahmanir Rahim

#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
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
int main()
{
	IOS
    ll n,k;
    while(cin>>n>>k)
    {
        string s;
        cin>>s;
        map<char,int>arr;
        for(int i=0;i<k;i++)
        {
            char x;
            cin>>x;
            arr[x]=1;
        }
        ll cnt=0;
        ll trace=n;
        ll tot = (n*(n+1))/2;
        ll pre,post=n;
        for(int i=n-1;i>=0;i--)
        {
            if(arr[s[i]]==0)
            {
                pre = i+1;
                cnt+=pre;
                post = trace-i-1;
                cnt+= (pre*post);
                trace = i;
            }
        }
        cout << (tot-cnt) << endl;
    }
    return 0;
}
///Alhamdulillah
