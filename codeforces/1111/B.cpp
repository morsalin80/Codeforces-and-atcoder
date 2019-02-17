#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define ms(x) memset(x,0,sizeof(x))
#define IOS ios::sync_with_stdio(false);
using namespace std;
int main()
{
    int n,k,m;
    while(cin>>n>>k>>m){
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n,greater<int>());
        ll cum[n];
        long double res=0;
        cum[0] = arr[0];
        for(int i=1;i<n;i++) cum[i] = cum[i-1]+arr[i];
        for(int i=0;i<=m and i<n;++i)
        {
            ll cnt = n-i;
            ll total = cum[cnt-1];
            ll add = min(cnt*k,(ll)m-i);
            total+=add;
            res = max(res,(long double)total/ (long double)cnt);
        }
        cout << fixed << setprecision(20)<<res <<endl;
    }
    return 0;
}

