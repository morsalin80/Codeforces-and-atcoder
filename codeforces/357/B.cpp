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
    int n,m;
    cin>>n>>m;
    map<int,int>mm;
    for(int i=0;i<m;i++){
        int a,b,c;
        cin>>a>>b>>c;
        bool one=0,two=0,three=0;
        if(mm[a]==1 || mm[b]==1 || mm[c]==1)one=1;
        if(mm[a]==2 || mm[b]==2 || mm[c]==2)two=1;
        if(mm[a]==3 || mm[b]==3 || mm[c]==3)three=1;
        if(one){
            if(mm[a]==1)mm[b]=2,mm[c]=3;
            if(mm[b]==1)mm[a]=2,mm[c]=3;
            if(mm[c]==1)mm[b]=2,mm[a]=3;
        }
        else if(two){
            if(mm[a]==2)mm[b]=1,mm[c]=3;
            if(mm[b]==2)mm[a]=1,mm[c]=3;
            if(mm[c]==2)mm[b]=1,mm[a]=3;
        }
        else if(three){
            if(mm[a]==3)mm[b]=2,mm[c]=1;
            if(mm[b]==3)mm[a]=2,mm[c]=1;
            if(mm[c]==3)mm[b]=2,mm[a]=1;
        }
        else{
            mm[a]=1,mm[b]=2,mm[c]=3;
        }
    }
    for(auto it=mm.begin();it!=mm.end();it++){
        cout << it->second << " ";
    }
    cout << endl;
    return 0;
}
///Alhamdulillah

