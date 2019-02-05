#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define ms(x) memset(x,0,sizeof(x))
#define IOS ios::sync_with_stdio(false);
using namespace std;
int main()
{
	IOS
    int a,b;
    cin>>a>>b;
    int fact = min(a,b);
    ll ans=1;
    for(int i=fact;i>0;i--){
        //cout << ans <<endl;
        ans*=i;
    }
    cout << ans <<endl;
    return 0;
}

