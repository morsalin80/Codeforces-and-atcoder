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
        int b,p,f;
        cin>>b>>p>>f;
        int h,c;
        cin>>h>>c;
        b/=2;
        int ans = 0;
        if(h>c)
        {
            int x = min(b,p);
            ans += (x*h);
            //cout << ans <<" <<< " <<  endl;
            b-=x;
            int y = min(b,f);
            ans += (y*c);
            b-=y;
        }
        else if(h<=c)
        {
            int x = min(b,f);
            ans += (x*c);
            b-=x;
            //cout << ans <<" <<< " <<  endl;
            int y = min(b,p);
           // cout << y << endl;
            ans += (y*h);
            b-=y;
        }
        cout << ans << endl;
    }
    return 0;
}

