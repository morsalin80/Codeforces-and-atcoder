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
int main()
{
	IOS
    string s,t;
    while(cin>>s>>t)
    {
        int so[26];
        ms(so);
        int s_length = s.size();
        int t_length = t.size();
        bool aut = false;
        for(int i=0,j=0;i<s_length;i++)
        {
            if(j<t_length && s[i]==t[j]) ++j;
            if(j==t_length) aut = true;
        }
        for(int i=0;i<s_length;i++)
            so[s[i]-'a']++;
        for(int i=0;i<t_length;i++)
            so[t[i]-'a']--;
        bool ar = true,both = true;
        for(int i=0;i<26;i++)
        {
            ar&=so[i]==0;
            both&=so[i]>=0;
        }
        if(aut) cout << "automaton\n";
        else if(ar) cout << "array\n";
        else if(both) cout << "both\n";
        else
            cout << "need tree\n";
    }
    return 0;
}

