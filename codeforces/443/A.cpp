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
    getline(cin,s);
        set<char>ch;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!='{' && s[i]!=' ' &&s[i]!=','&&s[i]!='}') ch.insert(s[i]);
        }
        cout << ch.size() <<endl;
    return 0;
}

