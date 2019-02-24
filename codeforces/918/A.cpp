#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define ms(x) memset(x,0,sizeof(x))
#define ins insert
#define IOS ios::sync_with_stdio(false);
using namespace std;
int main()
{
	IOS
    int n;
    bool fibo[1001]={0};
    int first = 0, sec = 1, fib=0;
    fibo[0] = 1; fibo[1] = 1;
    while(1){
        fib = first+ sec;
        if(fib>1000) break;
        fibo[fib] = 1;
        first = sec; sec = fib;
    }
    while(cin>>n)
    {
        for(int i=1;i<=n;i++)
        {
            if(fibo[i]) cout << 'O';
            else cout << 'o';
        }
        cout <<endl;
    }

    return 0;
}

