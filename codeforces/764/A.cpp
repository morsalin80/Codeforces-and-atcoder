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
    int n,m,z;
    while(cin>>n>>m>>z)
    {
        int l =(n*m)/ __gcd(n,m);
        l = z/l;
        cout<< l<<endl;
    }
    return 0;
}

