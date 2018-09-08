#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    int in=0;
    while(n--)
    {
        string s;
        cin>>s;
        if(s[0]=='+'||s[2]=='+')
            in++;
        else
            in--;
    }
    cout << in <<endl;
}
