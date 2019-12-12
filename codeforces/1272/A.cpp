/// Bismillahir Rahmanir Rahim

#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define f0(n) for(int i=0;i<n;i++)
#define ms(x) memset(x,0,sizeof(x))
#define ins insert
#define highest(x) numeric_limits<x>::max()
#define lowest(x) numeric_limits<x>::min()
#define Inf INFINITY
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define PI acos(-1)
#define IOS ios::sync_with_stdio(false);
using namespace std;
int dx8[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dy8[] = {1,-1, 1, -1, 0, 0, -1, 1};
int dx4[] = {0, 0, 1, -1};
int dy4[] = {1, -1, 0, 0};
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
        ll a,b,c;
        cin>>a>>b>>c;
        vector<ll>am,bm,cm,ans;
        am.pb(a);am.pb(a-1);am.pb(a+1);
        bm.pb(b);bm.pb(b-1);bm.pb(b+1);
        cm.pb(c);cm.pb(c-1);cm.pb(c+1);

        for(int i=0;i<am.size();i++){
            for(int j=0;j<bm.size();j++){
                for(int k=0;k<cm.size();k++)
                {
                    ans.pb(abs(am[i]-bm[j])+abs(am[i]-cm[k])+abs(bm[j]-cm[k]));
                }
            }

        }
        sort(ans.begin(),ans.end());
        cout << ans[0]<<endl;
    }
    return 0;
}
///Alhamdulillah
