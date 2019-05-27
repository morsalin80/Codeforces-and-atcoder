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
        ll i;
        for(i=1;;i*=2)
        {
            //cout << i <<endl;
            if(n>=0 && n<=i)
            {
                cout << "Sheldon\n";
                break;
            }
            n-=i;
            if(n>=0 && n<=i)
            {
                cout << "Leonard\n";
                break;
            }
            n-=i;
            if(n>=0 && n<=i)
            {
                cout << "Penny\n";
                break;
            }
            n-=i;
            if(n>=0 && n<=i)
            {
                cout << "Rajesh\n";
                break;
            }
            n-=i;
            if(n>=0 && n<=i)
            {
                cout << "Howard\n";
                break;
            }
            n-=i;
        }
    }
    return 0;
}

