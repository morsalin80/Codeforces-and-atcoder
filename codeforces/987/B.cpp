#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define f0(n) for(int i=0;i<n;i++)
#define ms(x) memset(x,0,sizeof(x))
#define ins insert
#define IOS ios::sync_with_stdio(false);
using namespace std;
int main()
{
	IOS
    int x,y;
    while(cin>>x>>y)
    {
        if((x==2 && y==4)||(x==4 && y==2))
        {
            cout << "=\n";
            continue;
        }
        if((x==2 && y==3) || (x==3 && y==2))
        {
            if(x>y) cout << ">\n";
            else cout << "<\n";
            continue;
        }
        if(x>y){
            if(y==1)
            cout << ">\n";
        else
            cout << "<\n";
        }
        else if(x<y){
            if(x==1)
            {
                 cout << "<\n";
            }
        else
            cout << ">\n";
        }
        else
            cout << "=\n";
    }
    return 0;
}

