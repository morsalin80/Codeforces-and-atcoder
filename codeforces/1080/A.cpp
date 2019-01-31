#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define ms(x) memset(x,0,sizeof(x))
#define IOS ios::sync_with_stdio(false);
using namespace std;
int main()
{
	IOS
    int n,k;
    while(cin>>n>>k)
    {
        int r=2,g=5,b=8;
        r*=n;g*=n;b*=n;
        int rem;
        rem = r/k;
        if(k*rem<r) rem++;
        int ans = 0;
        ans+=rem;
        rem = g/k;
        if(rem*k<g) rem++;
        ans+=rem;
        rem = b/k;
        if(rem*k<b) rem++;
        ans+=rem;
        cout << ans <<endl;
    }
    return 0;
}
