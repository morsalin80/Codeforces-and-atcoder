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
    ll n,k,s;
    while(cin>>n>>k>>s)
    {
        if((n-1)*k<s){cout << "NO\n"; continue;}
        if(k>s) {cout << "NO\n";continue;}
        ll cur = 1;
        cout << "YES\n";
        while(k>0)
        {
            ll dist = min(n-1,s-k+1);
            if(cur - dist > 0)
            {
                cur = cur - dist;
            }
            else
            {
                cur = cur+ dist;
            }
            cout << cur << " ";
            s-=dist;
            k--;
        }
        cout << endl;

    }
    return 0;
}
