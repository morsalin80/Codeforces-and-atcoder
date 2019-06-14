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
    string s;
    while(cin>>s)
    {
        int l,r;
        if(s[0]=='0') l=2;
        if(s[0]=='1') l=7;
        if(s[0]=='2') l=2;
        if(s[0]=='3') l=3;
        if(s[0]=='4') l=3;
        if(s[0]=='5') l=4;
        if(s[0]=='6') l=2;
        if(s[0]=='7') l=5;
        if(s[0]=='8') l=1;
        if(s[0]=='9') l=2;
        if(s[1]=='0') r=2;
        if(s[1]=='1') r=7;
        if(s[1]=='2') r=2;
        if(s[1]=='3') r=3;
        if(s[1]=='4') r=3;
        if(s[1]=='5') r=4;
        if(s[1]=='6') r=2;
        if(s[1]=='7') r=5;
        if(s[1]=='8') r=1;
        if(s[1]=='9') r=2;

        cout << l*r <<endl;
    }
    return 0;
}

