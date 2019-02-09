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
    while(cin>>n)
    {
        int hun;
        int rem;
        hun = n/100;
        rem = n%100;
        int twenty;
        twenty = rem/20;
        rem = rem%20;
        int ten;
        ten = rem/10;
        rem = rem%10;
        int five = rem/5;
        rem = rem%5;
        cout << hun+twenty+ten+five+rem<<endl;
    }
    return 0;
}

