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
ll a[3000001];
int main()
{
	IOS
    int n,m;
    while(cin>>n>>m)
    {
        ms(a);
        ll t;
        if(n-1<=m && m<=2*(n+1)){
            if(m==n-1)
            {
                a[0] = -1;
                a[m+1] = -1;
                t = n-1;
            }
            else if(m==n)
            {
                a[m+1] = -1;
                t= n;
            }
            else
                t = n+1;
            ll k = m%t;
            if(k==0 && m!=t) k = n+1;
            if(a[0]==-1) cout << "0";
            for(int i=1;i<=n;i++)
            {
                if(a[i]!=-1){
                if(k>0) cout << "110";
                else
                    cout << "10";
                k--;
                }
            }
            if(a[m+1]!=-1)
            {
                if(k>0)
                    cout << "11\n";
                else cout << "1\n";
            }
        }
        else
            cout << "-1\n";
    }
    return 0;
}
