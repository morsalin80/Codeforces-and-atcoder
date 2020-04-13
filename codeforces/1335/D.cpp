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
        string s[9];
        for(int i=0;i<9;i++){
            cin>>s[i];
        }
        if(s[0][0]=='9') s[0][0]=s[0][0]-1;
        else s[0][0]=s[0][0]+1;
        if(s[1][4]=='9') s[1][4]=s[1][4]-1;
        else s[1][4]=s[1][4]+1;
        if(s[2][8]=='9') s[2][8]=s[2][8]-1;
        else s[2][8]=s[2][8]+1;
        if(s[3][7]=='9') s[3][7]=s[3][7]-1;
        else s[3][7]=s[3][7]+1;
        if(s[4][5]=='9') s[4][5]=s[4][5]-1;
        else s[4][5]=s[4][5]+1;
        if(s[5][1]=='9') s[5][1]=s[5][1]-1;
        else s[5][1]=s[5][1]+1;
        if(s[6][2]=='9') s[6][2]=s[6][2]-1;
        else s[6][2]=s[6][2]+1;
        if(s[7][3]=='9') s[7][3] = s[7][3]-1;
        else s[7][3]=s[7][3]+1;
        if(s[8][6]=='9') s[8][6] = s[8][6]-1;
        else s[8][6]=s[8][6]+1;
        for(int i=0;i<9;i++){
            cout << s[i] << endl;
        }
    }
    return 0;
}
///Alhamdulillah
