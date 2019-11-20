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
    ll t;
    cin>>t;
    while(t--)
    {
        ll m,n;
        cin>>n>>m;
        vector<pair<int,int> > vp;
        ll cost=0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            cost+= (2*x);
            vp.pb(mp(x,i+1));
        }
        sort(vp.begin(),vp.end());
        int mark[n];
        ms(mark);
        int par = 0;
        if(n<=2){ cout << "-1\n"; continue;}
        if(n>m) {cout << "-1\n";continue;}
        cout << cost << endl;
        cout << vp[0].second << " "<< vp[n-1].second<<endl;
        for(int i=0;i<n-1;i++)
        {
            cout << vp[i].second <<" "<< vp[i+1].second << endl;
        }
    }
    return 0;
}
///Alhamdulillah
