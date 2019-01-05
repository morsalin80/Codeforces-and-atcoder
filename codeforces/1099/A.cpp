#include<bits/stdc++.h>
using namespace std;
int main()
{
    int w,h;
    while(cin>>w>>h)
    {
        int u1,u2,d1,d2;
        cin>>u1>>d1;
        cin>>u2>>d2;
        int cur = w;
        for(int i=h;i>=0;i--){

            cur+=i;
       // cout << cur << " "<< i <<endl;
            if(i==d1)
                cur-=u1;
            if(i==d2)
                cur-=u2;
            if(cur<0) cur =0;
        }
        cout << cur<<endl;
    }
    return 0;
}
