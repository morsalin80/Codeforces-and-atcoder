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
    int n;
    while(cin>>n)
    {
        ll a[n],b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n);
        ll ai=n-1,bi=n-1;
        ll sa=0,sb=0;
        ll tun=0;
        while(ai>=0 || bi>=0)
        {
            if(tun%2==0){
                if(bi<0) {sa+=a[ai];ai--;}
                else if(ai<0) {bi--;}
                else if(a[ai]>b[bi]){
                    sa+=a[ai];
                    ai--;
                }
                else{
                    bi--;
                }
            }
            else{
                if(ai<0) {sb+=b[bi];bi--;}
                else if(bi<0){ai--;}
                else if(b[bi]>a[ai]){
                    sb+=b[bi];
                    bi--;
                }
                else{
                    ai--;
                }
            }
            tun++;
            //cout << ai << " <> "<< bi << " <> "<<sa << " <> "<< sb <<endl;
        }
        cout << sa-sb << endl;
    }
    return 0;
}
///Alhamdulillah
