
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    string s;
    while(cin>>s)
    {
        if(s.at(0)>96)
            s.at(0)-=32;
        cout << s <<endl;
    }
    return 0;
}
