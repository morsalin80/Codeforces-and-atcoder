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
    ll a,b;
    while(cin>>a>>b)
    {
        while(a>0 && b>0)
        {
            if(a>=2*b){ a%=2*b; }
            else if(b>=2*a){b%=2*a;}
            else break;
        }
        cout << a << " "<<b<<endl;
    }
    return 0;
}

