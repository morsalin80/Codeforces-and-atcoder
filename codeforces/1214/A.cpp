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
    int n;
    while(cin>>n)
    {
        int d,e;
        cin>>d>>e;
        e*=5;
        int x = n/d;
        int y = n/e;
        int mini = n;
        for(int i=1;i<=x;i++)
        {
            int w = (n%(d*i))%e;
            mini = min(w,mini);
        }
        for(int i=1;i<=y;i++)
        {
            int w = (n%(i*e))%d;
            mini = min(w,mini);
           
        }
        cout << mini <<endl;
    }
    return 0;
}

