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
    int a,b,c,x,y,z;
    cin>>a>>b>>c>>x>>y>>z;
    int xt=0,lc = 0;
    if(a>x) {
        int d = a-x;
        if(d%2==1) d--;
        xt += d;
    }
    else if(a<x) lc += x-a;
    if(b>y){
        int d = b-y;
        if(d%2==1) d--;
        xt += d;
    }
    else if(b<y) lc+= y-b;
    if(c>z){
        int d = c-z;
        if(d%2==1) d--;
        xt += d;
    }
    else if(z>c) lc+= z-c;

    if(xt>= 2*lc) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}

