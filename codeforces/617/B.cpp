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
    int n;
    while(cin>>n)
    {
        int arr[n];
        vector<int>vec;
        bool got1 = false;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]==1){
                vec.pb(i);
                got1 = true;
            }
        }
        ll ans = 1;
        if(vec.size()==1){
            cout << ans << endl;
            continue;
        }
        else if(!got1){ cout << "0\n"; continue;}
        for(int i=1;i<vec.size();i++)
        {
            ans*= (vec[i]-vec[i-1]);
        }
        cout << ans << endl;
    }
    return 0;
}
/// Alhamdulillah

