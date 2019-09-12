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
    int n,k;
    while(cin>>n>>k)
    {
        if(n==1 && k==0) {cout << 1 << endl;continue;}
        if(k<(n/2) || n==1 && k!=0) {cout << "-1\n"; continue;}

        int x = k - ((n-2)/2); /// taking first two elements as a major gcd holder, left of them consume only gcd=1;
        cout << x << " "<< 2*x << " ";
        int w = 2*x + 1;
        for(int i=1;i<=((n-2)/2);i++){
            cout << w << " " << w+1 << " ";
            w+=2;
        }
        if(n%2!=0) cout << w+10 << endl;

    }
    return 0;
}
