/*Logic inspired from: tanvirshossain */

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
    int q;
    cin>>q;
    while(q--)
    {
        ll n,m;
        cin>>n>>m;
        int fuc[10];
        ll ans = 0;
        for(int i=0;i<10;i++)
        {
            string bal = to_string(m*(i+1));
            fuc[i] = bal[bal.size()-1]-'0';
            ans+= fuc[i];
        }
        ll length = n/m;
        ans *= (length/10);
        ll baki = length%10;
        for(int i = 0;i<baki;i++)
            ans+=fuc[i];
        cout << ans << endl;
    }
    return 0;
}

