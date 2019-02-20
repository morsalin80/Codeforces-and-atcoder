#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define ms(x) memset(x,0,sizeof(x))
#define IOS ios::sync_with_stdio(false);
using namespace std;
int main()
{
	IOS
    int m,n;
    while(cin>>m>>n)
    {
        ll a[5],b[5];
        for(int i=0;i<5;i++)
        {
            a[i] = m/5; b [i] = n/5;
        }
        int ab = m%5, bb = n%5;
        for(int i=1;i<=ab;i++) a[i]++;
        for(int i=1;i<=bb;i++) b[i]++;
        ll ans = a[0]*b[0];int j;
        for(int i=1,j=4;i<5;i++,j--)
        {
            ans+= a[i]* b[j];
        }
        cout << ans <<endl;
    }
    return 0;
}

