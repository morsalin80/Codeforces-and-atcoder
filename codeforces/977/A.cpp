#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define ms(x) memset(x,0,sizeof(x))
#define IOS ios::sync_with_stdio(false);
using namespace std;
int main()
{
	IOS
    ll n,k;
    cin>>n>>k;
    while(k--)
    {
        if(n%10==0) n/=10;
        else n--;
    }
    cout << n <<endl;
    return 0;
}

