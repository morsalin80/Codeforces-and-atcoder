#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define ms(x) memset(x,0,sizeof(x))
#define ins insert
#define IOS ios::sync_with_stdio(false);
using namespace std;
int main()
{
	IOS
    int n,k,t;
    while(cin>>n>>k>>t)
    {
        if(k>t) cout << t;
        else if(t>=k && t<=n) cout << k;
        else cout << abs(k-abs(t-n));
        cout << "\n";
    }
    return 0;
}

