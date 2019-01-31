#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define ms(x) memset(x,0,sizeof(x))
#define IOS ios::sync_with_stdio(false);
using namespace std;
int main()
{
	IOS
    int n;
    while(cin>>n)
    {
        string s;
        cin>>s;
        int a=0;int d=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='A') a++;
            if(s[i]=='D') d++;
        }
        if(d>a) cout << "Danik\n";
        else if(d<a) cout << "Anton\n";
        else cout << "Friendship\n";
    }
    return 0;
}

