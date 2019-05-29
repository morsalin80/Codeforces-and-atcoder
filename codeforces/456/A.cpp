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
        vector<pair<int,int> >vpa;
        vector<pair<int,int> >vpb;
        for(int i=0;i<n;i++)
        {
            int a,b;
            cin>>a>>b;
            vpa.pb(make_pair(a,i));
            vpb.pb(make_pair(b,i));
        }
        sort(vpa.begin(),vpa.end());
        sort(vpb.begin(),vpb.end());
        bool ok = 1;
        for(int i=1;i<n;i++)
        {
            if(vpa[i].first!=vpa[i-1].first && vpb[i].first!=vpb[i-1].first && vpa[i].second != vpb[i].second)
            {
                ok = false;
                break;
            }
        }
        if(ok) cout << "Poor Alex\n";
        else cout << "Happy Alex\n";
    }
    return 0;
}

