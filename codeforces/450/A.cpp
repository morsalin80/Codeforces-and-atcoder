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
    int n,m;
    while(cin>>n>>m)
    {
        queue<pair<int,int> > vp;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            vp.push(mp(x,i+1));
        }
        int ans;
        while(!vp.empty())
        {
            pair<int,int> myp;
            myp = vp.front();
            ans = myp.second;
            if(myp.first<=m)
                vp.pop();
            else
            {
                myp.first-=m;
                vp.push(myp);
                vp.pop();
            }
        }
        cout << ans <<endl;
    }
    return 0;
}

