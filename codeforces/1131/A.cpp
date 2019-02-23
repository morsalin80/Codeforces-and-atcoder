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
    int w1,h1,w2,h2;
    while(cin>>w1>>h1>>w2>>h2){
        ll ans = (((w1*2)+4)+(h1+h2)*2);
        cout << ans <<endl;
    }
    return 0;
}

