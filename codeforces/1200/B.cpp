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
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        bool pos = true;
        for(int i=1;i<n;i++)
        {
        //    cout << "m: "<< m <<endl;
            if(arr[i-1]>=(max(arr[i]-k,0)))
            {
                m+= (arr[i-1]-(max(arr[i]-k,0)));
            }
            else{
                if(arr[i-1]+m<arr[i]-k){
                    pos = false;
                    break;
                }
                else{
                    m-=(arr[i]-k-arr[i-1]);
                }
            }
        }
        if(pos) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
///Alhamdulillah
