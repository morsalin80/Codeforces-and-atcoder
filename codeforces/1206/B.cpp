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
    int n;
    while(cin>>n)
    {
        ll ans = 0;
        int neg = 0;
        bool z = false;
        ll lp = 10000000000;
        ll bn = -10000000000;
        for(int i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            if(x<0) {neg++;
                ans += (-1 - x);
                bn = max(x,bn);
            }
            else{
                if(x==0) z = true;
                lp = min(lp,x);
                ans+= abs(x - 1);
            }
        }
        if(neg%2!=0 && !z)
        {
            ans+=2;
        }
        cout << ans << endl;
    }
    return 0;
}

