#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define ms(x) memset(x,0,sizeof(x))
#define IOS ios::sync_with_stdio(false);
using namespace std;
int main()
{
	IOS
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,d;
        cin>>a>>b;
        c = a-b;
        bool prime= true;
        if(c!=1) prime= false;
        else if(c==1){
            d = a + b;
        if(d%2==0) prime = false;
        else{
            for(int i=3;i<=sqrt(d);i+=2)
            {
                if(d%i==0) {prime = false; break;}
            }
        }}
        if(prime) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
