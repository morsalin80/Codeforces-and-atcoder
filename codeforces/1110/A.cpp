#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define ms(x) memset(x,0,sizeof(x))
#define IOS ios::sync_with_stdio(false);
using namespace std;
int main()
{
	IOS
    int n,k;
    while(cin>>n>>k)
    {
        int last;
        int od=0;
        int num;
        for(int i=0;i<k;i++)
        {
            cin>>num;
            last = num;
            if(num%2!=0) od++;
        }
       // cout << last <<endl;
        if(n%2!=0) {if(od%2!=0)cout << "odd\n";
        else cout << "even\n";}
        else if(n%2==0){ if(last%2==0){cout << "even\n";}
        else cout << "odd\n";}
    }
    return 0;
}

