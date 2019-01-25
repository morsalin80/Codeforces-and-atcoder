#include<bits/stdc++.h>
#define ll long long
using namespace std;
int num(ll n)
{
    ll lim=sqrt(n);
    int c=0;
    for(ll i=1;i<=lim;i++)
    {
        if(n%i==0)
        {
           // cout << n/i <<" ";
            if(n/i==i || n/i==n) c++;
            else c+=2;
        }

    }
    return c;
}
int main()
{
    ll b;
    cin>>b;
    int dis;
    dis=num(b);
    if(b==1ll) cout << "1\n";
    else cout << dis+1ll <<endl;
    return 0;
}
