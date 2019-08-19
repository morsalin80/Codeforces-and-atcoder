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
        if(n%2==0){
            cout << "NO\n";
            continue;
        }
        else
        {
            cout << "YES\n";
            cout << "1 ";
            for(int i=4;i<2*n;i+=4){
                cout << i << " "<<i+1 << " ";
            }
            for(int i=2;i<2*n;i+=4)
            {
                cout << i << " "<< i+1<< " ";
            }
            cout << 2*n <<endl;
        }
    }
    return 0;
}

