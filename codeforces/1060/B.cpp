#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define ms(x) memset(x,0,sizeof(x))
#define IOS ios::sync_with_stdio(false);
using namespace std;
int main()
{
	IOS
    ll n;
    while(cin>>n){
    ll ans = 0;
    bool ekok= false;
    while(n>=1)
    {

        int ck;
        ck=n%10;
        n/=10;
        if(ekok) ck--;
        if(n!=0 && ck!=9)
        ck+=10;
        //cout << ck <<endl;
        ans += (ck/2) +(ck-(ck/2));
        //cout << ans <<endl;
        if(ck!=9)ekok = true;
    }
    cout << ans << endl;
    }
    return 0;
}

