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
    int n,s;
    while(cin>>n>>s)
    {
        vector<pair<int,int> > vp;
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            if(s>x)
            {
                if(y==0)
                    y=100;
                vp.pb(mp(y,x));
            }
            else if(s==x && y==0)
            {
                y = 100;
                vp.pb(mp(y,x));
            }
        }
        sort(vp.begin(),vp.end());
        if(vp.empty()) cout << "-1\n";
        else cout <<100 - vp[0].first << endl;

    }
    return 0;
}
