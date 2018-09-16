#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    long long a,b,x,y;
    while(cin>>a>>b>>x>>y){
        long long gc = __gcd(x,y);
        //cout << gc <<endl;
        if(gc>0){x/=gc;y/=gc;}
        long long ag,bg;
        ag = a/x;
        bg = b/y;
        cout << min(ag,bg) <<endl;
    }
    return 0;
}
