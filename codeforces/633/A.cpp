#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define ms(x) memset(x,0,sizeof(x))
#define IOS ios::sync_with_stdio(false);
using namespace std;
int main()
{
	//IOS
    int a,b,c;
    cin>>a>>b>>c;
    int tempc = c;
    while(tempc>=a)
    {
        if(tempc%a==0) {cout << "Yes\n"; return 0;}
        else tempc-=b;
    }
    tempc = c;
    while(tempc>=b)
    {
        if(tempc%b==0) {cout << "Yes\n";return 0;}
        else tempc -= a;
    }
    cout << "No\n";
}

