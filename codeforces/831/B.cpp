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
    string first,sec,s;
    while(cin>>first>>sec>>s)
    {
        for(int i=0;i<s.size();i++)
        {
        if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z'))
        {
            bool look = false;
            if((s[i]>='A' && s[i]<='Z')) {s[i]+=32; look = true;}
            for(int j=0;j<first.size();j++)
            {
                if(s[i]==first[j]){ s[i]=sec[j]; if(look) s[i]-=32;break;}
            }
        }}
        cout << s <<endl;
    }
    return 0;
}

