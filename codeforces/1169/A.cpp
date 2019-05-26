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
    int n,a,x,b,y;
    while(cin>>n>>a>>x>>b>>y)
    {
        bool chk = false;
        while(1)
        {
            if(a==b) {chk = true;break;}
            if(a==x||b==y) {break;}
             a++;b--;
            if(a>n) a=1;
            if(b<1) b = n;
        }
        if(chk) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
