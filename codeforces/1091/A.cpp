#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y,b,r;
    while(cin>>y>>b>>r){
        y+=2;
        b+=1;
        if(y<b){
            if(y<r) cout << 3*(y-2)+3;
            else cout << 3*r-3;
        }
        else if(b<=y){
            if(b<r) cout << 3*(b-1);
            else cout << 3*r-3;
        }
        else if(r<=b)
        {
            if(r<=y) cout << 3*r-3;
            else cout << 3*(y-2)+3;
        }
        cout <<endl;
    }
    return 0;
}
