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
    int n,x;
    while(cin>>n>>x)
    {
        ll ice = x;
        int dis = 0;
        char s;
        int p;
        for(int i=0;i<n;i++){
            cin>>s>>p;
            if(s=='+') ice+=p;
            if(s=='-')
            {
                if(p>ice) dis++;
                else ice-=p;
            }
        }
        cout << ice << " "<< dis <<endl;
    }
    return 0;
}

