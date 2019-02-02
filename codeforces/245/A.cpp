#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define ms(x) memset(x,0,sizeof(x))
#define IOS ios::sync_with_stdio(false);
using namespace std;
int main()
{
	IOS
    int test;
    cin>>test;
    int x[2]={0};
    int y[2]={0};
    while(test--)
    {
        int t,x1,y1;
        cin>>t>>x1>>y1;
        x[t-1]+=x1;
        y[t-1]+=y1;
    }
    if(x[0]>=y[0]) cout << "LIVE\n";
    else cout << "DEAD\n";
    if(x[1]>=y[1])cout << "LIVE\n";
    else cout << "DEAD\n";
    return 0;
}

