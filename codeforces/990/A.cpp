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
    ll n,m;
    int a,b;
    while(cin>>n>>m>>a>>b)
    {
        if(n%m==0){cout << "0\n";continue;}
        cout << min((n-(m*(n/m)))*b , (m*((n/m)+1)-n)*a) <<endl;
    }
    return 0;
}

