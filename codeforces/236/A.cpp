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
        set<char> st;
        for(int i=0;i<s.size();i++)
            st.insert(s[i]);
        if(st.size()%2==0) cout << "CHAT WITH HER!\n";
        else cout << "IGNORE HIM!\n";
    }
    return 0;
}

