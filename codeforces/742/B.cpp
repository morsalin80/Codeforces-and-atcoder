#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define f0(n) for(int i=0;i<n;i++)
#define ms(x) memset(x,0,sizeof(x))
#define ins insert
#define IOS ios::sync_with_stdio(false);
using namespace std;
int main()
{
	IOS
    int n,x;
    cin>>n>>x;
    ll arr[n];
    ll cnt[200002];
    ms(cnt);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        cnt[arr[i]]++;
    }
    ll cntt= 0;
    if(x==0)
    {
        for(int i=0;i<100005;i++)
        {
            ll tmp = cnt[i]*(cnt[i]-1);
            cntt+= tmp;
        }
        cout << cntt/2<<endl;
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        if((arr[i]^x)<=100000){
            cntt+= cnt[arr[i]^x];
        }
    }
    cout << cntt/2 <<endl;
    return 0;
}