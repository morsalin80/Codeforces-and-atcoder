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
        int n;
        cin>>n;
        ll no=0,ne=0;
        for(int i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            if(x%2==0)
            {
                ne++;
            }
            else
                no++;
        }
        int m;
        cin>>m;
        ll mo = 0, me = 0;
        for(int i=0;i<m;i++)
        {
            ll x;
            cin>>x;
            if(x%2==0)
            {
                me++;
            }
            else mo++;
        }
        ll ans;
        ans = ((no*mo));
        ans+= ((me*ne));
        cout << ans << endl;
    }
    return 0;
}
