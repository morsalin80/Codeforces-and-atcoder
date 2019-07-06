#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define f0(n) for(int i=0;i<n;i++)
#define ms(x) memset(x,0,sizeof(x))
#define ins insert
#define IOS ios::sync_with_stdio(false);
using namespace std;
bool prime(int n)
{
    if(n%2==0 && n!=2) return 0;
    for(int i=3;i<=sqrt(n);i+=2)
    {
        if(n%i==0) return 0;
    }
    return 1;
}
int main()
{
	IOS
    ll n;
    while(cin>>n){
    if(prime(n))
        cout << "1\n";
    else if(n%2==0)
        cout << "2\n";
    else if(prime(n-2))
        cout << "2\n";
    else
        cout << "3\n";
    }
    return 0;
}
