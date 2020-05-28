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
#define tc(t) int t;cin>>t; while(t--)
#define prec(n) fixed<<setprecision(n)
#define maxpq priority_queue<int>
#define minpq priority_queue<int,vector<int>,greater<int> >
#define ms(x) memset(x,0,sizeof(x))
#define ins insert
#define ALL(v) v.begin(),v.end()
#define ii pair<int,int>
#define vii vector<ii>
#define fi first
#define se second
#define none(n)  __builtin_popcount(n);
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
    ll a,b;
    cin>>a>>b;
    if(a==b){cout << 0 << endl;return 0;}
    int aa[6],bb[6];
    ms(aa),ms(bb);
    int cnt=0;
    while(a>0){
        if(a%2==0){
            aa[2]++;
            a/=2;
        }
        else if(a%3==0){
            aa[3]++;
            a/=3;
        }
        else if(a%5==0){
            aa[5]++;
            a/=5;
        }
        else break;
    }
    while(b>0){
        if(b%2==0){
            bb[2]++;
            b/=2;
        }
        else if(b%3==0){
            bb[3]++;
            b/=3;
        }
        else if(b%5==0){
            bb[5]++;
            b/=5;
        }
        else break;
    }
    if(a!=b){cout << "-1\n";}
    else {
        cout << abs(aa[2]-bb[2])+abs(aa[3]-bb[3]) + abs(aa[5]-bb[5])<< endl;
    }
    return 0;
}
///Alhamdulillah

