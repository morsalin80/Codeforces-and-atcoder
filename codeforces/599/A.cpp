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
    int d1,d2,d3;
    while(cin>>d1>>d2>>d3)
    {
        ll sum = 0;
        int first,sec;
        first= min(d1,d2);
        sum+=first; if(first==d1) sec = d2;else sec = d1;
        sum += min(d3,d1+d2);
        sum += min(sec, d3+first);
        cout << sum <<endl;
    }
    return 0;
}

