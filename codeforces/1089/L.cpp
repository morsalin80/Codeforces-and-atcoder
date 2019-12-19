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
    int n,k;
    while(cin>>n>>k)
    {
        int arr[k+1];
        ms(arr);
        vector<int>vec;
        int a[n],b[n];
        f0(n)cin>>a[i];
        f0(n)cin>>b[i];
        for(int i=0;i<n;i++)
        {
            if(arr[a[i]]<b[i]){
                if(arr[a[i]]!=0)
                {
                    vec.pb(arr[a[i]]);
                }
                arr[a[i]]=b[i];
            }
            else{
                vec.pb(b[i]);
            }
        }
        int hoiche=0;
        for(int i=1;i<=k;i++) {
            if(arr[i]!=0)hoiche++;
        }
        ll ans = 0;
        sort(vec.begin(),vec.end());
        for(int i=0;i<k-hoiche;i++)
        {
            ans+=vec[i];
        }
        cout << ans << endl;
    }
    return 0;
}
///Alhamdulillah
