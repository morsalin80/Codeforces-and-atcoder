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
    unsigned ll s,a,b,c;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>s>>a>>b>>c;
        unsigned ll l = s/(a*c);
        unsigned ll rem =(s%(a*c));
        unsigned ll ans = l*(a+b) + rem/c;
        cout << ans <<endl;
    }
    return 0;
}

