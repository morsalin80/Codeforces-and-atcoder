/// Bismillahir Rahmanir Rahim

#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define f0(n) for(int i=0;i<n;i++)
#define ms(x) memset(x,0,sizeof(x))
#define ins insert
#define IOS ios::sync_with_stdio(false);
using namespace std;
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
bool subchk(string s,string t)
{
    int m = s.size();
    int n = t.size();
    int j = 0;
    for(int i=0;i<n && j<m ;i++)
    {
        if(s[j]==t[i])
        {
            j++;
        }
    }
    if(j==m) return true;
    else return false;
}
int main()
{
	IOS
    int q;
    cin>>q;
    while(q--)
    {
        string s,t,p;
        cin>>s>>t>>p;
        int ss[26],tt[26],pp[26];
        ms(ss),ms(tt),ms(pp);
        for(int i=0;i<s.size();i++)
            ss[s[i]-'a']++;
        bool ok = false;
        for(int i=0;i<t.size();i++){
            tt[t[i]-'a']++;
        }
        for(int i=0;i<p.size();i++)
            pp[p[i]-'a']++;
        if(!subchk(s,t)){cout << "NO\n";continue;}
        bool pos = true;
        for(int i=0;i<26;i++)
        {
            if(tt[i]>ss[i]+pp[i]){
                pos = false;
                break;
            }
        }
        if(!pos) cout << "NO\n";
        else if(pos) cout << "YES\n";
    }
    return 0;
}
