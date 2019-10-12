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
vector<ll> divi;
void divisors(ll n)
{
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            divi.pb(i);
            if(n/i != i){
                divi.pb(n/i);
            }
        }
    }
}
int main()
{
	IOS
    int n;
    while(cin>>n)
    {
        ll arr[n];
        divi.clear();
        ll gc = 0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            gc = __gcd(gc,arr[i]);
            //cout << gc << endl;
        }
        divisors(gc);
        cout << divi.size() << endl;
    }
    return 0;
}
