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
        if(n==1){
            cout << "-1\n";
            continue;
        }
        cout << n << " "<< n+1 << " "<< n*(n+1) <<endl;
    }
    return 0;
}

