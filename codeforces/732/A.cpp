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
    int k,r;
    while(cin>>k>>r)
    {
        int i=1;
        for( i=1;;i++)
        {
            if((k*i)%10==0 || (k*i)%10==r) break;
        }
        cout << i <<endl;
    }
    return 0;
}

