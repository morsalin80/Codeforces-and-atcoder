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
        if(s.size()==1){if(s[0]!='a' && s[0]!='e' && s[0]!='i' && s[0]!='o' && s[0]!='u' && s[0]!='n')
            cout<< "NO\n";
            else
                cout << "YES\n";
            continue;
        }
        bool ok = true;
        for(int i=1;i<s.size();i++)
        {
            if(s[i-1]!='a' && s[i-1]!='e' && s[i-1]!='i' && s[i-1]!='o' && s[i-1]!='u' && s[i-1]!='n'){
                if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u'){
                    ok = false;
                    break;
                }
            }
        }
        int i=s.size();
        if(s[i-1]!='a' && s[i-1]!='e' && s[i-1]!='i' && s[i-1]!='o' && s[i-1]!='u' && s[i-1]!='n')
        {
            cout << "NO\n";continue;
        }
        if(ok) cout << "YES\n";
        else cout << "NO\n";


    }
    return 0;
}

