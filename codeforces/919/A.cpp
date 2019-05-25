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
        double mini = 10000000.0;
        for(int i=0;i<n;i++)
        {
            double a,b;
            cin>>a>>b;
            mini= min(mini,a/b);
        }
        double ans = mini*(float)m;
        cout <<fixed<<setprecision(8)<< ans <<endl;
    }
    return 0;
}

