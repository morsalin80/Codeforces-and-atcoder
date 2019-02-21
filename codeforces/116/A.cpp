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
    int n;
    while(cin>>n)
    {
        int a,b;
        int cur=0;
        int maxi = 0;
        for(int i=0;i<n;i++)
        {
            cin>>a>>b;
            cur -=a;
            cur+=b;
            if(cur>maxi) maxi = cur ;
        }
        cout << maxi <<endl;
    }
    return 0;
}

