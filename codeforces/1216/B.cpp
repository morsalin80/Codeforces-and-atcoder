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
        vector<pair<int,int> > vp;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            vp.pb(mp(x,i+1));
        }
        ll ans = 0;
        sort(vp.begin(),vp.end());
        int j=0;
        for(int i=n-1;i>=0;i--,j++)
        {
            ans += vp[i].first*(j) + 1 ;
        }
        cout << ans << endl;
        for(int i=n-1;i>=0;i--)
        {
            cout << vp[i].second << " ";
        }
        cout << endl;
    }
    return 0;
}
