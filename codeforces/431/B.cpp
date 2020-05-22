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
    int a[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>a[i][j];
        }
    }
    ll maxx=0;
    for(int hala1=0;hala1<5;hala1++){
        for(int hala2=0;hala2<5;hala2++){
            if(hala2==hala1)continue;
            ll hala12=a[hala1][hala2]+a[hala2][hala1];
            for(int hala3=0;hala3<5;hala3++){
                if(hala3==hala1 || hala3==hala2)continue;
                ll hala23=a[hala2][hala3] + a[hala3][hala2];
                for(int hala4=0;hala4<5;hala4++){
                    if(hala4==hala1 || hala4==hala2 || hala4==hala3) continue;
                    ll hala34=a[hala3][hala4]+a[hala4][hala3];
                    for(int hala5=0;hala5<5;hala5++){
                        if(hala5==hala1 || hala5==hala2 || hala4==hala5 || hala5==hala3) continue;
                        ll hala45=a[hala4][hala5]+a[hala5][hala4];
                        ll x=2*hala34+2*hala45+hala12+hala23;
                        maxx=max(x,maxx);
                    }
                }
            }
        }
    }
    cout << maxx << endl;
    return 0;
}
///Alhamdulillah
