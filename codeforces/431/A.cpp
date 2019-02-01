#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define ms(x) memset(x,0,sizeof(x))
#define IOS ios::sync_with_stdio(false);
using namespace std;
int main()
{
	IOS
    int a[5];
    cin>>a[1]>>a[2]>>a[3]>>a[4];
    string s;
    cin>>s;
    ll waste=0;
    for(int i=0;i<s.length();i++)
    {
        waste+=a[s[i]-48];
    }
    cout << waste <<endl;
    return 0;
}

