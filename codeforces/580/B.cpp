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
    ll n,d;
    while(cin>>n>>d)
    {
        vector<pair<ll,ll> >vp;
        for(int i=0;i<n;i++)
        {
            ll m,s;
            cin>>m>>s;
            vp.pb(mp(m,s));
        }
        sort(vp.begin(),vp.end());
        int left=0;
        ll mx = 0;
        ll point=0;
        for(int i=0;i<n;)
        {
            if(vp[i].first-vp[left].first < d){
                point+= vp[i].second;
                i++;
            }
            else {
                point-=vp[left].second;
                left++;
            }
            mx= max(mx,point);
        }
        cout << mx << endl;
    }
    return 0;
}

