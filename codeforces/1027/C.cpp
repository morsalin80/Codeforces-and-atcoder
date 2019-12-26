/// Bismillahir Rahmanir Rahim

#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define f0(n) for(int i=0;i<n;i++)
#define ms(x) memset(x,0,sizeof(x))
#define ins insert
#define pura(v) v.begin(),v.end()
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
        map<int,int>mm;
        int gotcha=-1;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            mm[x]++;
            if(mm[x]>=4) gotcha=x;
        }
        if(gotcha!=-1){ cout << gotcha << " "<< gotcha << " "<< gotcha << " "<< gotcha << endl; continue;}
        vector<int>vec;
        for(auto it=mm.begin();it!=mm.end();it++)
        {

            if((it)->second >=2)
            {
                vec.pb((it)->first);
            }
        }
        sort(pura(vec),greater<int>());
        double mini=0;
        int ans1,ans2;
        for(int i=1;i<(int)vec.size();i++)
        {
            double x = vec[i-1];
            double y = vec[i];
            if(y/x>=mini){
                ans1 = x;
                ans2 = y;
                mini= y/x;
            }
        }
        cout << ans1 << " "<< ans1 << " "<< ans2 << " "<< ans2 << endl;
    }
    return 0;
}
///Alhamdulillah
