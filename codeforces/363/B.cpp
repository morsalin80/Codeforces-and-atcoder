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
    int n,k;
    while(cin>>n>>k)
    {
        int arr[n+1];
        arr[0]=0;
        for(int i=1;i<=n;i++)
        {
            int c;
            cin>>c;
            arr[i] = arr[i-1]+c;
        }
        vector<pair<int,int> >vp;
        for(int i=k;i<=n;i++){
            vp.pb(mp((arr[i]-arr[i-k]),i-k+1));
           // cout << (arr[i]-arr[i-k]) << " "<< i << endl;
        }
        sort(vp.begin(),vp.end());
        cout << vp[0].second<<endl;
    }
    return 0;
}
///Alhamdulillah
