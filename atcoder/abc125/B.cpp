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
        int v[n];
        int c[n];
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>c[i];
        }
        int sum=0;
        for(int i=0;i<n;i++)
        {
            if(c[i]<v[i]) sum+= v[i]-c[i];
        }
        cout << sum <<endl;
    }
    return 0;
}

