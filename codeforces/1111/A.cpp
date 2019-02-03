#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define ms(x) memset(x,0,sizeof(x))
#define IOS ios::sync_with_stdio(false);
using namespace std;
int main()
{
	IOS
    string s,t;
    while(cin>>s>>t)
    {
        if(s.size()!=t.size()){ cout << "No\n";continue;}
        bool yes= true;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                if(t[i]!='a' && t[i]!='e' && t[i]!='i' && t[i]!='o' && t[i]!='u'){yes=false;break;}
            }
            else{
                if(t[i]=='a'|| t[i]=='e'||t[i]=='i'||t[i]=='o'||t[i]=='u'){
                        yes = false; break;
            }
            }
        }
        if(yes) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}

