#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define ms(x) memset(x,0,sizeof(x))
#define IOS ios::sync_with_stdio(false);
using namespace std;
const int maxn = (int)3e5 + 3;

const int maxa = (1 << 20) + 3;
int n;
int arr[maxn];
int cnt[2][maxa];
int main()
{
	IOS

    cin>>n;
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
    }
    cnt[1][0] = 1;
    int xorr=0;
    ll ans=0;
    for(int i=0;i<n;++i)
    {
        xorr^=arr[i];
        ans+= cnt[i%2][xorr];
        ++cnt[i%2][xorr];
    }
    cout << ans <<endl;
    return 0;
}
