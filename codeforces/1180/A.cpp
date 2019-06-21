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
        int podn = (((2*n - 3) - 1) / 2)+1;
        ll ans = ((1+(2*n - 3))/2)*podn;
        ans*=2;
        ans+=(2*n - 1);
        cout << ans <<endl;
    }
    return 0;
}

