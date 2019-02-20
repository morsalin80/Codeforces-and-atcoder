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
    int n,x;
    while(cin>>n>>x)
    {
        int cnt=0;
        if(n>=x) cnt=1;
        for(int i=2;i<=n;i++)
        {
            if(x%i==0 && (x/i)<=n){ cnt++;}
        }
        cout << cnt <<endl;
    }
    return 0;
}

