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
    string s;
    while(cin>>s)
    {
        cout << s;
        for(int i=s.length()-1;i>=0;i--)
            cout << s[i];
        cout <<endl;
    }
    return 0;
}

