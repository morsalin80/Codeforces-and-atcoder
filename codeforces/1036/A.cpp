#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    long long n,k;
    long long vag;
    while(cin>>n>>k)
    {
       vag = k/n;
       if(k%n!=0)
        vag++;
       cout << vag <<endl;
    }
    return 0;
}
