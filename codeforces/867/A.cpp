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
    int n;
    while(cin>>n)
    {
        cin>>s;
        int sf=0,fs=0;
        for(int i=1;i<s.size();i++)
        {
            if(s[i]=='F' && s[i-1]=='S') sf++;
            if(s[i]=='S' && s[i-1]=='F') fs++;
        }
        if(sf>fs) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}

