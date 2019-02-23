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
        if((n-2)%3!=0) cout << "1 1 "<< n-2 <<endl;
        else if((n-3)%3!=0) cout << "1 2 "<<n-3<<endl;
    }
    return 0;
}

