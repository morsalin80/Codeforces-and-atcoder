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
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        int zero = 0 , one = 0;
        vector<string> vec;
        vector<pair<int,int> > vp;
        bool bejor = false;
        for(int i=0;i<n;i++)
        {
            string s;
            cin>>s;
            vec.pb(s);

            int temo=0,tem1=0;
            for(int j=0;j<s.size();j++)
            {
                if(s[j]=='0') temo++;
                else tem1++;
            }
            if(s.size()%2!=0) bejor = 1;
            vp.pb(mp(temo,tem1));
            one+= tem1;
            zero+= temo;
        }
        int ans = 0;
        int rem = 0;
        int tot = zero+one;
        for(int i=0;i<n;i++)
        {
            if(vec[i].size()%2!=0)
            {
                ans++;
                tot-= vec[i].size();
            }
            else if(vec[i].size()%2==0)
            {
                if(vp[i].first%2==0 && vp[i].second%2==0)
                {
                    ans++;
                    tot-=vec[i].size();
                }
                else rem++;
            }
        }
        if(rem%2!=0 && !bejor) rem--;
       cout << ans+rem << endl;
    }
    return 0;
}
///Alhamdulillah
