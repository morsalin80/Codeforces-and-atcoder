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
    int s,n;
    while(cin>>s>>n)
    {
        vector<pair <int,int> >vp;
        for(int i=0;i<n;i++)
        {
            int x,y;
            cin>>x>>y;
            vp.pb(mp(x,y));
        }
        sort(vp.begin(),vp.end());
        bool ok = 1;
        for(int i=0;i<n;i++)
        {
            if(vp[i].first>=s) {ok = false; break;}
            else{
                s+= vp[i].second;
            }
        }
        if(ok) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}

