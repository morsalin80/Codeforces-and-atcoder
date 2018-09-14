#include<bits/stdc++.h>
using namespace std;
int main()
{
    //ios::sync_with_stdio(false);
    int n,m;
    while(cin>>n>>m)
    {
        char a,b;
        bool colour = false;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
          //      cout << "Dhukse\n";
                cin>>a;
                if(a=='C'||a=='M'||a=='Y')
                    colour = true;
            }
        }
        //cout << colour <<endl;
        if(colour)
            cout << "#Color\n";
        else
            cout << "#Black&White\n";
    }
    return 0;
}
