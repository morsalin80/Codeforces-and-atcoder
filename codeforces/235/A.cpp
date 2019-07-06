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
    ll n;
    while(cin>>n)
    {
        ll maxx = 0;
        if(n==1){ cout << "1\n"; continue;}
        if(n==2){ cout << "2\n"; continue;}
        if(n%2!=0) {cout << n*(n-1)*(n-2) <<endl; continue;}
        else {
            for(ll i=n;i>=n-50 && i>0;i--)
            {
                for(ll j=n;j>=n-50 && j>0;j--)
                {
                    for(ll k=n;k>=n-50 && k>0;k--)
                    {
                        ll lcm = (k*j)/__gcd(k,j);
                        lcm = (lcm*i)/__gcd(lcm,i);
                        if(maxx<lcm) maxx = lcm;
                    }
                }
            }
        }
        cout << maxx <<endl;
    }
    return 0;
}
