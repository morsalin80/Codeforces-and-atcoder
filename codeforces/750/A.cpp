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
    int n,k;
    while(cin>>n>>k)
    {
        int rem = 240 - k;
        int i=1;
        int bug = 0;
        for(i=1;i<=n;i++)
        {
            rem-= (i*5);
           // cout << rem <<endl;
            if(rem<0) {break;}
        }
        cout << i-1<<endl;
    }
    return 0;
}

