#include<iostream>
using namespace std;
int main()
{
    int l,r,a,t;
    while(cin>>l>>r>>a)
    {
        if(l+a==0 || r+a==0)
        {
            t=0;
        }
        else if(l+a<r)
            t=(l+a)*2;
        else if(r+a<l)
            t=(r+a)*2;
        else
            t=l+r+a;
        if(t%2!=0)t--;
        cout << t << endl;
    }
    return 0;
}
