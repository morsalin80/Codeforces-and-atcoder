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
    cin>>s;
    bool pos = false;
    if(s.size()<3){cout << "No\n";return 0;}
    for(int i=0;i<s.size()-2;i++)
    {
        if(s[i]=='.')continue;
        if(s[i]=='A')
        {
            if(s[i+1]=='B' && s[i+2]=='C')
            {
                pos = 1;
                break;
            }
            else if(s[i+1]=='C' && s[i+2]=='B')
            {
                pos = 1;
                break;
            }
        }
        if(s[i]=='B')
        {
            if(s[i+1]=='A' && s[i+2]=='C')
            {
                pos = 1;
                break;
            }
            else if(s[i+1]=='C' && s[i+2]=='A')
            {
                pos = 1;
                break;
            }
        }
        if(s[i]=='C')
        {
            if(s[i+1]=='B' && s[i+2]=='A')
            {
                pos = 1;
                break;
            }
            else if(s[i+1]=='A' && s[i+2]=='B')
            {
                pos = 1;
                break;
            }
        }
    }
    if(pos)
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}

