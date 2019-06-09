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
    ll n;
    cin>>n;
    if(n<10) cout << 1*(n+1)-1;
    else if(n<100) cout << 2*(n+1)-11;
    else if(n<1000) cout << 3*(n+1)-111;
    else if(n<10000) cout << 4*(n+1) -1111;
    else if(n<100000) cout << 5*(n+1) -11111;
    else if(n<1000000) cout << 6*(n+1) -111111;
    else if(n<10000000) cout << 7*(n+1) -1111111;
    else if(n<100000000) cout << 8*(n+1) -11111111;
    else if(n<1000000000) cout << 9*(n+1) -111111111;
    else if(n<10000000000) cout << 10*(n+1) -1111111111;
    return 0;
}

