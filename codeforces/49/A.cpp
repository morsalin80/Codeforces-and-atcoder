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
    getline(cin,s);
    for(int i=s.size()-1;i>=0;i--)
    {
        if(s[i]==' ' || s[i]== '?') continue;
        else if(s[i]=='A' || s[i]== 'E' || s[i]=='I' || s[i] == 'O' || s[i] == 'U' || s[i]=='Y' ||
                s[i]=='a' || s[i]== 'e' || s[i]=='i' || s[i] == 'o' || s[i] == 'u' || s[i]=='y')
                    cout << "YES\n";
        else cout << "NO\n";
        break;
    }
    return 0;
}

