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
    int y,w;
    while(cin>>y>>w)
    {
        int a = max(y,w);
        int numerator = 6-(a-1);
        int denumerator = 6;
        if(numerator%2==0) {
            denumerator /=2;
            numerator/=2;
        }
        if(numerator%3==0) {
            denumerator /=3;
            numerator/=3;
        }
        cout << numerator << "/"<<denumerator <<endl;
    }
    return 0;
}

