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
    while(cin>>s){
    int i,j,k,m,n;
    bool h=false, e = false, l = false, l2 = false, o = false;
    for(i=0;i<s.length();i++)
    {
        if(s[i]=='h') {h = true; break;}
    }
    if(h) for(j = i+1;j<s.length();j++) {if(s[j]=='e'){e = true; break;}}
    if(e) for(k = j+1;k<s.length();k++) {if(s[k]=='l'){l = true; break;}}
    if(l) for(m = k+1;m<s.length();m++) {if(s[m]=='l'){l2 = true; break;}}
    if(l2) for(n = m+1; n<s.length(); n++) {if(s[n]=='o'){o = true; break;}}
    if(o) cout << "YES\n";
    else cout << "NO\n";
    }
    return 0;
}

