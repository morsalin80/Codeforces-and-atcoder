#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define f0(n) for(int i=0;i<n;i++)
#define ms(x) memset(x,0,sizeof(x))
#define ins insert
#define IOS ios::sync_with_stdio(false);
using namespace std;
vector<ll>al;
void genarator(ll n)
{
    al.pb(n);
    if(n>1000000000) return;
    genarator(n*10 + 4);
    genarator(n*10 + 7);
}
int main()
{
	IOS
	genarator(0);
    ll n;
    sort(al.begin(),al.end());
    while(cin>>n)
    {
        cout << lower_bound(al.begin(),al.end(),n) - al.begin() << endl;
    }
    return 0;
}
