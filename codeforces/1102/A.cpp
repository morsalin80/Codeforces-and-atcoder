#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    while(cin>>n)
    {
        long long a=0,b=0;
        a = (n*(n+1ll))/2*1ll;
        if(a%2==0) cout << 0 <<endl;
        else cout << 1 <<endl;
       // cout << abs(a-b)<<endl;
    }
    return 0;
}
