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
    string s;
    while(cin>>s)
    {
        int l;
        int bang = s.size();
        if(s.size()>1) l = ((s[bang-2]-'0')*10) + (s[bang-1]-'0');
        else l = (s[bang-1]-'0');
        if(l%4==0) cout << "4\n";
        else cout << "0\n";
    }
    return 0;
}

