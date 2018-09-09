#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    bool print = false;
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)=='H'||s.at(i)=='Q'||s.at(i)=='9')
            {
                print = true;
                break;
            }
    }
    if(print)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}
