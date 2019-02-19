#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define ms(x) memset(x,0,sizeof(x))
#define IOS ios::sync_with_stdio(false);
using namespace std;
int main()
{
	IOS
    ll n,b,ans;
    while(cin>>n>>b)
    {
        ans=(ll)1e18;
        for(ll i=2;i<=b;i++){
            if(i*i>b) i=b;
            ll cnt=0;
            while(b%i==0){
                b/=i;
                cnt++;
            }
            ll agn=0;
            if(cnt==0) continue;
            ll tempn = n;
            while(tempn>1)
            {
                agn+= (tempn/i);
                tempn/=i;
            }
            ans = min(ans, (ll)(agn/cnt));
        }
        cout << ans <<endl;
    }
    return 0;
}

