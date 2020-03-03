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
    string s;
    while(cin>>s){
    vector<int> vec;
    int ind=0;
    int n=s.size();
    int i=0,j=n-1;
    bool op=1,cl=0;
    int opp=-1,clp=-1;
    for(;i<n && i<j;)
    {
        //cout << s[i] << " char :: ind "<< i+1 << "  "<<s[j] <<" char:: ind "<< j+1 << endl;
        if(op)
        {
            if(s[i]!='(')i++;
            else{
                op=0;
                cl=1;
                opp=i+1;
            }
        }
        else if(cl)
        {
            if(s[j]!=')')j--;
            else{
                op=1;
                cl=0;
                vec.pb(opp);
                vec.pb(j+1);
                j--;
                i++;
            }
        }
    }
    if(vec.size()==0) cout << "0\n";
    else{
        sort(ALL(vec));
        cout << "1\n";
        cout << vec.size()<< endl;
        for(int i=0;i<(int)vec.size();i++)cout << vec[i] << " ";
        cout << endl;
    }
    }
    return 0;
}
///Alhamdulillah
