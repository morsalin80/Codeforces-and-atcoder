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
        for(int i=0;i<s.size();i++){
            if(i==0 and s[i]=='9') continue;
            int num = s[i]-'0';
            if(num>=5){
               num = 9 - num;
                s[i] = num + '0';
            }

    }
        bool first=false;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0' && first == false)
            {
                continue;
            }
            first = true;
            cout << s[i];
        }
        if(!first) cout << 9;
        cout << endl;
    }
    return 0;
}

