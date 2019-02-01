#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define ms(x) memset(x,0,sizeof(x))
#define IOS ios::sync_with_stdio(false);
using namespace std;
int main()
{
	IOS
    int a,b;
    while(cin>>a>>b)
    {
        cout << min(a,b)<<" ";
        cout << (max(a,b)-min(a,b))/2 <<endl;
    }
    return 0;
}

