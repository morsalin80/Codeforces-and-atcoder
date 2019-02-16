#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define ms(x) memset(x,0,sizeof(x))
#define IOS ios::sync_with_stdio(false);
using namespace std;
int main()
{
	IOS
    int n,v;
    while(cin>>n>>v)
    {
        int ans = v;
        int les = n;
        if(n-1<=v) cout << n-1 <<endl;
        else{
        for(int i=2;i<=n-v;i++)
        {
            ans+=i;
        }
        cout << ans <<endl;
        }
    }
    return 0;
}
