#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int n;
    while(cin>>n)
    {
        string s;
        cin>>s;
        int taken =0;
        for(int i=1;i<n;i++)
        {
            if(s[i]==s[i-1])
                taken++;
        }
        cout << taken<<endl;
    }
}
