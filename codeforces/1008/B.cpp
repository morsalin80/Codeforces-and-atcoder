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
    int n;
    while(cin>>n)
    {
        int greed;
        bool ok = true;
        for(int i=0;i<n;i++)
        {
            int x,y;
            cin>>x>>y;
            if(i==0){
                greed = max(x,y);
                continue;
            }
            if(!ok) continue;
            if(greed>=max(x,y))
                greed = max(x,y);
            else if(greed>=min(x,y))
                greed = min(x,y);
            else ok = false;
        }
        if(ok) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}

