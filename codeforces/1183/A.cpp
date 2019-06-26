#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define f0(n) for(int i=0;i<n;i++)
#define ms(x) memset(x,0,sizeof(x))
#define ins insert
#define IOS ios::sync_with_stdio(false);
using namespace std;
int xx(int a)
{
    int x = a;
        int sum = 0;
        while(x>0)
        {
            sum+= x%10;
            x/=10;
        }
    return sum;
}
int main()
{
	IOS
    int a;
    while(cin>>a)
    {
            while(1)
            {
                if((xx(a))%4==0)
                {
                    cout << a <<endl;
                    break;
                }
                a++;
            }
    }
    return 0;
}

