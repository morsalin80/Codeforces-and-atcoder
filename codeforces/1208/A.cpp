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
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,n;
        cin>>a>>b>>n;
        c = a^b;
        if(n%3==0)
            cout << a << endl;
        else if(n%3==1)
            cout << b << endl;
        else
            cout << c << endl;
    }
    return 0;
}

