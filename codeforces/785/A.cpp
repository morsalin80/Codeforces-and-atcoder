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
    int n;
    while(cin>>n)
    {
        ll ans=0;
        while(n--)
        {
            string s;
            cin>>s;
            if(s=="Tetrahedron") ans+=4;
            if(s=="Cube") ans+= 6;
            if(s=="Octahedron") ans+= 8;
            if(s=="Dodecahedron") ans+= 12;
            if(s=="Icosahedron") ans+= 20;
        }
        cout << ans << endl;
    }
    return 0;
}

