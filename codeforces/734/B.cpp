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
    int k2,k3,k5,k6;
    while(cin>>k2>>k3>>k5>>k6)
    {
        ll sum =0;
        int d = min(k2, min(k5,k6));
        sum+= d*256;
        int t = min((k2-d),k3);
        sum+= t*32;
        cout << sum <<endl;
    }
    return 0;
}

