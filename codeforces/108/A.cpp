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
    string s;
    while(cin>>s){
        int h1,h2,m1,m2;
        h1=s[0]-'0';
        h2=s[1]-'0';
        m1=s[3]-'0';
        m2=s[4]-'0';
        while(1){
            m2++;
            m1+=(m2/10);
            m2%=10;
            h2+=(m1/6);
            m1%=6;
            h1+=(h2/10);
            h2%=10;
            if(h1==2 && h2==4){
                h1=0;h2=0;
            }
            if(h1==m2 && h2==m1){
                cout << h1<<h2<<":"<<m1<<m2<<endl;
                break;
            }
        }
    }
    return 0;
}
///Alhamdulillah
