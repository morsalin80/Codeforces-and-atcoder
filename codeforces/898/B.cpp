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
    int n,a,b;
    while(cin>>n>>a>>b)
    {
        bool ok = false;
        for(int i=0;;i++)
        {
            int rem = n - (a*i);
            if(rem<0) break;
            if(rem%b==0)
            {
                cout << "YES\n";
                cout << i << " "<< rem/b <<endl;
                ok = true;
                break;
            }
        }
        if(!ok) cout << "NO\n";
    }
    return 0;
}

