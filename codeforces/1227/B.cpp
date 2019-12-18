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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int q[n+1];
        int p[n+1];
        int ans[n+1];
        ms(ans);
        for(int i=1;i<=n;i++)p[i]=i;
        for(int i=1;i<=n;i++)cin>>q[i];
        int pm=q[1];
        p[pm] = -1;
        ans[1] = q[1];
        for(int i=2;i<=n;i++){
            if(q[i]>pm)
            {
                ans[i] = q[i];
                pm = q[i];
                p[pm] = -1;
            }
        }
        queue<int>vec;
        bool pos = 1;
        for(int i=1;i<=n;i++){if(p[i]!=-1)vec.push(i);}
        for(int i=2;i<=n;i++)
        {
            if(ans[i]==0)
            {
               if(vec.front()<=q[i]){
                    ans[i]=vec.front();
                    vec.pop();
               }
               else {
                pos = 0;
                break;
               }
            }
        }
        if(!pos) cout << "-1\n";
        else{
        for(int i=1;i<=n;i++)cout << ans[i] << " ";
        cout << endl;
        }

    }
    return 0;
}
///Alhamdulillah
