#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define ms(x) memset(x,0,sizeof(x))
#define IOS ios::sync_with_stdio(false);
using namespace std;
int main()
{
	IOS
    int x,y,z;
    cin>>x>>y>>z;
    int g,p,b;
    cin>>g>>p>>b;
    ll all = g+p+b;
    bool pos = true;
    if(x<=g) all-=x;
    else{ pos = false;}
    if(y<=(all-b)) all-=y;
    else pos = false;
    if(z>all) pos=false;
    if(pos) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}

