#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define f0(n) for(int i=0;i<n;i++)
#define ms(x) memset(x,0,sizeof(x))
#define ins insert
#define IOS ios::sync_with_stdio(false);
using namespace std;
bool sortinrev(const pair<int,int> &a,
               const pair<int,int> &b)
{
       return (a.first > b.first);
}
int main()
{
	int n;
	while(cin>>n)
    {
        ll arr[n];

        map<ll,ll>my;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            my[arr[i]]++;
        }
        int m;
        cin>>m;
        ll aud[m];
        ll sub[m];
        f0(m) cin>>aud[i];
        f0(m) cin>>sub[i];
        ll ma=0,mes=0;
        ll ans=0;
        for(int i=0;i<m;i++)
        {
            if(my[aud[i]]>ma)
            {
               ans = i+1;
               ma = my[aud[i]];
               mes = my[sub[i]];
            }
            else if(my[aud[i]]==ma)
            {
                if(mes<my[sub[i]])
                {
                    mes = my[sub[i]];
                    ans = i+1;
                }
            }
        }
        if(ans == 0) ans++;
        cout << ans << endl;
    }
    return 0;
}
