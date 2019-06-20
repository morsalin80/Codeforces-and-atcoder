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
    ll m,n;
    ll arr[105];
    ms(arr);
    cin>>n>>m;
    ll cum =0;
    for(ll i=0;i<n;i++)
    {
        ll t;
        cin>>t;
        cum+=t;
        if(cum<=m) cout<< 0 << " ";
        else
        {
            ll add = 0, in = 100, ans = 0;
            while((cum-add)>m && in>0){
                if((cum-(add+(arr[in]*in)))>m)
                {
                    add += arr[in]*in;
                    ans+=arr[in];
                }
                else
                {
                    ll x = abs(m-(cum-add)) - 1;
                    x = x/in;
                    ans+= x+1;
                    break;
                }
                in--;
            }
            cout << ans << " ";
        }
        arr[t]++;
    }
    return 0;
}
