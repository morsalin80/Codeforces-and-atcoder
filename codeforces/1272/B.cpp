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
    int q;
    cin>>q;
    while(q--)
    {
        string s;
        cin>>s;
        int u=0,d=0,l=0,r=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='U')u++;
            if(s[i]=='L')l++;
            if(s[i]=='D')d++;
            if(s[i]=='R')r++;
        }
        int ud=min(u,d);
        int lr=min(l,r);
        if(lr==0 && ud==0)cout<< "0\n\n";
        else if(lr==0) cout << "2\nUD\n";
        else if(ud==0) cout << "2\nLR\n";
        else{
            cout<<ud*2 + lr*2<<endl;
            for(int i=0;i<lr;i++)cout<< "R";
            for(int i=0;i<ud;i++)cout<< "U";
            for(int i=0;i<lr;i++)cout<< "L";
            for(int i=0;i<ud;i++)cout<< "D";

            cout << endl;
        }
    }
    return 0;
}
///Alhamdulillah
