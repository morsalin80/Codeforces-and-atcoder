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
        int cur=0;
        int ans = 0;
        for(int i=0;i<s.size();i++)
        {
            int first = cur - (s[i]-'a'), sec = (s[i]-'a') - cur;
            if(first<0) first+=26;
            if(sec<0) sec+=26;
            ans+=min(first,sec);
            cur = s[i]-'a';
        }
        cout << ans <<endl;
    }
    return 0;
}

