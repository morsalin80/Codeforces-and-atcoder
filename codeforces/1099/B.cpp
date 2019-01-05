#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int c=0;
        for(int i=2;i<1e9;i++)
        {
            c+=i/2;
            if(n<=c) {cout << i <<endl; break;}
        }
    }
    return 0;
}
