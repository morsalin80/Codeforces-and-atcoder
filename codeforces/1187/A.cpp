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
        ll n,s,t;
        cin>>n>>s>>t;
        if(s+t==n)
        {
            cout << max(s,t)+1 <<endl;
            continue;
        }
        ll x = (s+t)-n;
        cout << max(s,t)-x+1 <<endl;
    }
    return 0;
}

