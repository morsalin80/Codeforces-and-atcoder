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
    int n,m;
    while(cin>>n>>m)
    {
        map<ll,ll> num;
        for(int i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            num[x]++;
        }
        ll sum=0;
        vector<ll> vp;
        for(auto it=num.begin();it!=num.end();it++)
        {
            sum+=it->second;
            vp.pb(it->first);
            num[it->first]=sum;
        }
        ll arr[m];
        for(int i=0;i<m;i++)
        {
            ll x;
            cin>>x;
            ll point = lower_bound(vp.begin(),vp.end(),x)-vp.begin();
            if(vp[point]==x) arr[i] = num[vp[point]];
            else if(point>0)arr[i] = num[vp[point-1]];
            else arr[i] = 0;
        }
        for(int i=0;i<m;i++)cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
///Alhamdulillah
