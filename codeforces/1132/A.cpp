#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define ms(x) memset(x,0,sizeof(x))
#define ins insert
#define IOS ios::sync_with_stdio(false);
using namespace std;
int main()
{
	IOS
    int a,b,c,d;
    while(cin>>a>>b>>c>>d)
    {
        if(a==d){
            if(a==0 && c!=0) cout << "0\n";
            else cout << "1\n";
        }
        else cout << "0\n";
    }
    return 0;
}

