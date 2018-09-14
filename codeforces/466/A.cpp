#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b;
    while(cin>>n>>m>>a>>b)
    {
        int cost = 0;
        if(m*a>b)
        {
            cost += (n/m)*b;
            if(((n%m)*a)<b)
            cost+=(n%m)*a;
            else
                cost+=b;
        }
        else
            cost +=n*a;
        cout << cost<<endl;
    }
    return 0;
}
