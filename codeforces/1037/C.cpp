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
    int n;
    while(cin>>n)
    {
        string s,t;
        cin>>s>>t;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]!=t[i])
            {
                if(i+1<n && s[i+1]!=s[i] && (s[i+1]!=t[i+1])){ cnt++;i++;}
                else
                    cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}

