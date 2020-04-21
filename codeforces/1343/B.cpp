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
        int n;
        cin>>n;
        if((n/2)%2==0)
        {
            cout << "YES\n";
            ll odd=0;
            ll even=0;
            ll chole=2;
            ll o[n/2];
            ll e[n/2];
            for(int i=0;i<(n/2)-1;i++){
                e[i]=chole;
                even+=e[i];
                o[i] = chole-1;
                odd+=o[i];
                chole+=2;
            }
            even+=chole;
            e[(n/2)-1] = chole;
            o[(n/2)-1] = even-odd;
            for(int i=0;i<n/2;i++)cout << e[i] << " ";
            for(int i=0;i<n/2;i++)cout << o[i] << " ";
            cout << endl;
        }
        else cout << "NO\n";

    }
    return 0;
}
///Alhamdulillah
