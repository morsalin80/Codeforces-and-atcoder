#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define f0(n) for(int i=0;i<n;i++)
#define ms(x) memset(x,0,sizeof(x))
#define ins insert
#define IOS ios::sync_with_stdio(false);
using namespace std;
int main()
{
	IOS
    int n,m;
    while(cin>>n>>m)
    {
        if(2*n<m) cout << n <<endl;
        else if(2*m<n) cout << m <<endl;
        else
        {
            cout << (m+n)/3 <<endl;
        }
    }
    return 0;
}

