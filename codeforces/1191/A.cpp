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
        if(n%4==0) cout << "1 A\n";
        if(n%4==1) cout << "0 A\n";
        if(n%4==2) cout << "1 B\n";
        if(n%4==3) cout << "2 A\n";
    }
    return 0;
}

