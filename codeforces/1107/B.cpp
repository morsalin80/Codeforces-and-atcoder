#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        long long k,x;
        cin>>k>>x;
        cout << x+((k-1)*9)<<endl;
    }
    return 0;
}
