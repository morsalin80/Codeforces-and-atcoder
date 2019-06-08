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
        int a[n];
        ll sum = 0;
        int b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+= a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        sort(b,b+n,greater<int>());
        ll cap = b[0]+b[1];
        if(cap>=sum)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}

