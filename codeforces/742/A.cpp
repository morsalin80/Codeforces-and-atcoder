#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define ms(x) memset(x,0,sizeof(x))
#define IOS ios::sync_with_stdio(false);
using namespace std;
int main()
{
	IOS
    ll n;
    cin>>n;
    if(n==0) cout << 1 ;
    else if(n%4==0) cout << 6;
    else if(n%4==1) cout << 8;
    else if(n%4==2) cout << 4;
    else if(n%4==3) cout << 2;
    cout << endl;
    return 0;
}

