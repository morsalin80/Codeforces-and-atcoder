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
int main()
{
	IOS
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n = s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='?')
            {
                if(i>0 && i<n-1)
                {
                    if(s[i-1]!='a' && s[i+1]!='a')
                        s[i] = 'a';
                    else if(s[i-1]!='b' && s[i+1]!='b')
                        s[i] = 'b';
                    else if(s[i-1]!='c' && s[i+1]!='c')
                        s[i] = 'c';
                }
                else if(i>0)
                {
                    if(s[i-1]!='a')
                        s[i] = 'a';
                    else if(s[i-1]!='b')
                        s[i] = 'b';
                    else if(s[i-1]!='c')
                        s[i] = 'c';
                }
                else if(i<n-1)
                {
                    if(s[i+1]!='a')
                        s[i] = 'a';
                    else if( s[i+1]!='b')
                        s[i] = 'b';
                    else if(s[i+1]!='c')
                        s[i] = 'c';
                }
                else s[i] = 'a';
            }
        }
            bool pos = true;
            for(int i=1;i<n;i++){
                if(s[i]==s[i-1]){ pos = false; break;}
            }
            if(pos) cout << s << endl;
            else cout << "-1\n";
        }
    return 0;
}
///Alhamdulillah
