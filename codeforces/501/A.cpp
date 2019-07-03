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
    int a,b,c,d;
    while(cin>>a>>b>>c>>d)
    {
        ll x = max((3*a)/10 ,(a - (a/250)*c));
        ll y = max((3*b)/10 ,(b - (b/250)*d));
        if(x>y)
            cout << "Misha\n";
        else if(x<y)
            cout << "Vasya\n";
        else
            cout << "Tie\n";
    }
    return 0;
}

