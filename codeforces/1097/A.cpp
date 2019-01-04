#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s)
    {
        string car[5];
        for(int i=0;i<5;i++)
            cin>>car[i];
        bool dec = false;
        for(int i=0;i<5;i++)
        {
            if(car[i].at(0)==s.at(0) || car[i].at(1)==s.at(1))
                {
                    dec = true;
                }
        }
        if(dec) cout << "YES\n";
        else
            cout << "NO\n";
    }
}
