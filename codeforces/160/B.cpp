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
    int n;
    while(cin>>n){
        string s;cin>>s;

        char mini2='9',maxi2='0',mini1='9',maxi1='0';
        vector<char>vc1,vc2;
        for(int i=0;i<n;i++){
            vc1.pb(s[i]);
        }
       for(int i=n;i<2*n;i++){
            vc2.pb(s[i]);
       }
      sort(ALL(vc1));
      sort(ALL(vc2));
      bool ok=1;
      for(int i=0;i<n;i++){
        if(vc1[i]>=vc2[i]){
            ok=0;
            break;
        }
      }
      if(!ok){
        bool yes=1;
        for(int i=0;i<n;i++){
            if(vc1[i]<=vc2[i]){
                yes=0;
                break;
            }
        }
        if(yes)ok=1;
      }
      if(ok)cout << "YES\n";
      else cout << "NO\n";
    }
    return 0;
}
///Alhamdulillah
