#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define ms(x) memset(x,0,sizeof(x))
#define IOS ios::sync_with_stdio(false);
using namespace std;
int main()
{
	IOS
    ll l,r;
    while(cin>>l>>r)
    {
        if((r-l)<1){ cout << "NO\n"; continue;}
        else{
        cout << "YES\n";
        for(ll i=l;i<=r;i+=2)
        {
            cout << i << " "<< i+1 <<endl;
        }
        }
    }
    return 0;
}

