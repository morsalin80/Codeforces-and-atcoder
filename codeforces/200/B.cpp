#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define ms(x) memset(x,0,sizeof(x))
#define IOS ios::sync_with_stdio(false);
using namespace std;
int main()
{
	IOS
    int n;
    while(cin>>n)
    {
        int x=0,y;
        for(int i=0;i<n;i++){
            cin>>y;
            x+=y;
        }
        float xy;
        xy = (float)x/(float)n;
        cout <<fixed<<setprecision(12)<< xy <<endl;
    }
    return 0;
}

