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
    int a,b,x;
    while(cin>>a>>b>>x)
    {
        if(x%2==0)
        {
            if(a>b)
            {
                for(int i=1;i<=x/2;i++)
                {
                    cout << "01";
                }
                for(int i=1;i<=b-(x/2);i++)
                {
                    cout << "1";
                }
                for(int i=1;i<=a-(x/2);i++)
                {
                    cout <<"0";
                }
            }
            else if(a<=b)
            {
                for(int i=1;i<=x/2;i++)
                {
                    cout << "10";
                }
                for(int i=1;i<=a-(x/2);i++)
                {
                    cout << "0";
                }
                for(int i=1;i<=b-(x/2);i++)
                {
                    cout << "1";
                }
            }
        }
            else if(x%2!=0)
            {
                if(a>b)
                {
                    for(int i=1;i<=x/2;i++)
                    {
                        cout << "01";
                    }
                    for(int i=1;i<=a-(x/2);i++)
                    {
                        cout << "0";
                    }
                    for(int i=1;i<=b-(x/2);i++)
                    {
                        cout << "1";
                    }
                }
                else if(a<=b)
                {
                    for(int i=1;i<=x/2;i++)
                    {
                        cout << "10";
                    }
                    for(int i=1;i<=b-(x/2);i++)
                    {
                        cout << "1";
                    }
                    for(int i=1;i<=a-(x/2);i++)
                    {
                        cout << "0";
                    }
                }
            }
            cout << "\n";
    }
    return 0;
}

