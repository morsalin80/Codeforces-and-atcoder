#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define ms(x) memset(x,0,sizeof(x))
#define IOS ios::sync_with_stdio(false);
using namespace std;
int main()
{
	IOS
    int q;
    cin>>q;
    while(q--)
    {
        ll n;
        int a,b;
        cin>>n>>a>>b;
        int vag = n%2;
        cout <<min((n*a),(n/2)*b + (vag*a))<<endl;
    }
    return 0;
}
