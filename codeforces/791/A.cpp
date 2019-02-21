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
    int a,b;
    while(cin>>a>>b)
    {
        int cnt=0;
        while(a<=b)
        {
            cnt++;
            a*=3;
            b*=2;
        }
        cout << cnt <<endl;
    }
    return 0;
}

