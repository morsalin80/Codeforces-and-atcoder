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
    int a,b,c;
    while(cin>>a>>b>>c)
    {
        b/=2;
        c/=4;
        int fi = min(a,min(b,c));
        int ans = fi*1 + fi*2 + fi*4;
        cout << ans <<endl;
    }
    return 0;
}

