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
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                ans++;
                continue;
            }
            if(arr[i]==arr[i-1] && i>0 && arr[i]!=3)
            {
                ans++;
                arr[i] = 0;
            }
            else if(arr[i]==3)
            {
                if(arr[i-1]==1 && i>0) arr[i]=2;
                else if(arr[i-1]==2 && i>0) arr[i] = 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
///Alhamdulillah
