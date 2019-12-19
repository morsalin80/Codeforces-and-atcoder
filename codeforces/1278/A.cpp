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
    int t;
    cin>>t;
    while(t--)
    {
        string p,h;
        cin>>p>>h;
        int fre[26];
        ms(fre);
        for(int i=0;i<p.size();i++){
            fre[p[i]-'a']++;
        }
        bool all=false;
        for(int i=0;i<=(int)h.size()-(int)p.size();i++)
        {
            int ff[26];
            ms(ff);
            string tx(h.begin()+i,h.begin()+(int)p.size()+i);
            for(int j=0;j<tx.size();j++)
            {
                ff[tx[j]-'a']++;
            }
            bool kk=1;
            for(int j=0;j<26;j++)
            {
                kk&=(ff[j]>=fre[j]);
            }
            if(kk){all=1;break;}
        }
        if(all)cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
///Alhamdulillah
