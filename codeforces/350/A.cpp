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
        int a[n];
        int b[m];
        int max_a=0,min_a=110,min_b=110;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            max_a = max(max_a,a[i]);
            min_a = min(min_a,a[i]);
        }
        for(int i=0;i<m;i++)
        {
            cin>>b[i];
            min_b = min(min_b,b[i]);
        }
        if(max(2*min_a,max_a)<min_b)
            cout << max(2*min_a,max_a)<<endl;
        else cout << "-1\n";
    }
    return 0;
}

