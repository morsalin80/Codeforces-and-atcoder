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
    int l,r,x,y;
    while(cin>>l>>r>>x>>y)
    {
        if(y%x!=0)
        {
            cout << "0\n";
            continue;
        }
        int n = y/x;
        ll cnt = 0;
        for(int d=1;d*d<=n;d++)
        {
            if(n%d==0)
            {
                int c = n/d;
                if(c*x>=l && c*x<=r && d*x>=l && d*x<=r && __gcd(c,d)==1)
                {
                    if(d*d==n) cnt++;
                    else
                        cnt+=2;
                }
            }
        }
        cout<< cnt << endl;
    }
    return 0;
}
