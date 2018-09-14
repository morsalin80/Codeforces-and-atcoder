#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n){
        char a[n],b[n],c[n],d[n],e[n];
        bool got = false;

        for(int i=0;i<n;i++)
        {
            cin>>a[i]>>b[i]>>c[i]>>d[i]>>e[i];
            if(!got)
            {
                if(a[i]=='O' && b[i]=='O')
                {
                    a[i]='+';b[i]='+';
                    got = true;
                }
                else if(d[i]=='O' && e[i]=='O')
                {
                    d[i] = '+' ; e[i] = '+';
                    got = true;
                }
            }
        }
        if(!got)
            cout << "NO\n";
        else
        {
            cout << "YES\n";
            for(int i=0;i<n;i++)
                cout << a[i]<<b[i]<<c[i]<<d[i]<<e[i]<<endl;
        }
    }
    return 0;
}
