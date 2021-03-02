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
    int q;
    cin>>q;
    while(q--)
    {
        ll k,n,a,b;
        cin>>k>>n>>a>>b;
        ll x=(n*b)+1;
        if(x>k){
            cout << "-1\n";
        }
        else{
            ll xx=a-b;
            ll xxx= k - (n*b) -1 ;
            ll res= xxx/xx;
            cout << min(n,res)<< endl;
        }
    }
    return 0;
}
