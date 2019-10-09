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
    string s;
    while(cin>>s)
    {
        string maxx=s;
        int last = s[s.size()-1]-'0';
        for(int i=0;i<s.size();i++)
        {
            if((s[i]-'0')%2==0 && ((s[i]-'0')<last)){
                char temp = maxx[i];
                maxx[i] = maxx[s.size()-1];
                maxx[s.size()-1] = temp;
                break;
            }
        }
        if(maxx==s) maxx = "000";
        string maxx2=s;
        for(int i=s.size()-2;i>=0;i--)
        {
            if((s[i]-'0')%2==0 && ((s[i]-'0')>last)){
                char temp = maxx2[i];
                maxx2[i] = maxx2[s.size()-1];
                maxx2[s.size()-1] = temp;
                maxx = max(maxx2,maxx);
                break;
            }
        }
        if(maxx==s || maxx=="000") cout << "-1\n";
        else cout << maxx << endl;
    }
    return 0;
}

